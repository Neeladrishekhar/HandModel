include_directories(includes)
include_directories(${CMAKE_SOURCE_DIR}/libraries/BaseHand/includes)

add_library(Model src/Model.cpp)

target_link_libraries(Model BaseHand)