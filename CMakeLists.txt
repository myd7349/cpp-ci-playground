cmake_minimum_required(VERSION 3.15...3.31)
project(cpp-ci-playground LANGUAGES C CXX)
add_executable(main main.cpp)
target_compile_features(main PRIVATE cxx_std_17)

# References:
# [How to enable C++17 in CMake](https://stackoverflow.com/questions/45688522/how-to-enable-c17-in-cmake)
