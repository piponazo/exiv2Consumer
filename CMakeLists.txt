cmake_minimum_required(VERSION 3.8)
project(Exiv2Consumer VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(exiv2 REQUIRED CONFIG)

add_executable(testApp test.cpp)
target_link_libraries(testApp exiv2lib)
