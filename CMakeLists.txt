cmake_minimum_required(VERSION 3.0.2)
project(filter_tools)

find_package(catkin REQUIRED)

catkin_package(
 INCLUDE_DIRS include
 LIBRARIES filter_tools
)

include_directories(
 include
 ${catkin_INCLUDE_DIRS}
)

add_library(${PROJECT_NAME}
 src/lowpass.cpp
)