cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(Fibonacci
  LANGUAGES CXX
)

add_library(fibonacci INTERFACE)
target_include_directories(fibonacci INTERFACE include)
