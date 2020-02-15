cmake_minimum_required(VERSION 3.0)

project(MyLibrary)

include_directories(includes)
include_directories(${PROJECT_SOURCE_DIR}/libraries/eigen-3.3.7)

add_library(MyLibrary src/MyLibrary.cpp)