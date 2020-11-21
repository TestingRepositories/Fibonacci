cmake_minimum_required(VERSION 3.14)

project(Fibonacci LANGUAGES NONE)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

add_library(fibonacci INTERFACE)
target_include_directories(fibonacci INTERFACE include)

include(GetCPM)

CPMAddPackage(NAME Format.cmake
              GITHUB_REPOSITORY TheLartians/Format.cmake
              VERSION 1.0
             )
