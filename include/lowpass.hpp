#pragma once

#include <iostream>
#include <vector>
#include <cmath>

class LowPassFilter {
public:
    LowPassFilter(double cutoff_frequency, double sampling_frequency, double initialInput);

    double update(double input);

private:
    double K; // Filter gain
    double T; // Filter time constant
    double Ts; // Filter sample time
    double x; // Filter state
};