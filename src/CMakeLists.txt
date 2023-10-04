cmake_minimum_required(VERSION 3.5.0)

add_executable(28_1_swimming main.cpp ${MY_INCLUDE_DIR}/swimmer.h swimmer.cpp)

target_include_directories(28_1_swimming PUBLIC ${MY_INCLUDE_DIR})