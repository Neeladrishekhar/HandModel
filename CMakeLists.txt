# command : cmake -H. -Bbuilds
# command : cmake --build builds
# command : builds/Project
# command : rm -rf builds

cmake_minimum_required(VERSION 3.0)

project(Project)

add_executable(
  Project 
  src/main.cpp 
)

# OpenGL
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )
include_directories(libraries/BaseHand/includes)
include_directories(libraries/Model/includes)
include_directories(libraries/Graphics/includes)
include_directories(libraries/eigen-3.3.7)

add_subdirectory(libraries/BaseHand)
add_subdirectory(libraries/Model)
add_subdirectory(libraries/Graphics)

# target_link_libraries(Project BaseHand Model)
target_link_libraries(Project Model Graphics ${OPENGL_LIBRARIES} ${GLEW_LIBRARY} ${GLUT_LIBRARY})
