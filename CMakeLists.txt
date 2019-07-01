cmake_minimum_required(VERSION 2.8)
SET(CMAKE_CXX_STANDARD 11)
project(imu_utils_no_ros)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(imu_an main.cpp)

