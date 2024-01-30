#include "lowpass.hpp"

LowPassFilter::LowPassFilter(double cutoff_frequency, double sampling_frequency, double initialInput = 0.0)
{
  /*フィルターのゲイン*/
  K = 1.0;
  /*カットオフ周波数からフィルター時定数を計算する*/
  T = 1. / (2. * M_PI * cutoff_frequency);
  Ts = 1. / sampling_frequency;
  x = K * initialInput;
}

double LowPassFilter::update(double input) 
{
  x = (1 - Ts / T) * x + K * (Ts / T) * input;
  return x;
}