# command : cmake -H. -Bbuilds
# command : cmake --build builds
# command : rm -rf builds

cmake_minimum_required(VERSION 3.0)

project(Project)

include_directories(libraries/MyLibrary/includes)
include_directories(libraries/eigen-3.3.7)

add_executable(
  Project 
  src/main.cpp 
)

# to make the libMyLibraries.a compiled library
add_subdirectory(libraries/MyLibrary)

target_link_libraries(Project MyLibrary)
