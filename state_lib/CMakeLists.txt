cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STADARD_REQUIRED ON)

project(state_lib)

add_library(state_lib STATIC state.h)
target_include_directories(state_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
