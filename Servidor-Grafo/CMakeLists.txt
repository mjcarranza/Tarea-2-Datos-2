cmake_minimum_required(VERSION 3.17)
project(Grafo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Grafo main.cpp Grafo.h Grafo.cpp)


find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests GrafoServerTest.cpp)
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)