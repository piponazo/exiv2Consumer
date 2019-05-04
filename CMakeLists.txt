cmake_minimum_required(VERSION 3.8)
project(Exiv2Consumer VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(exiv2lib REQUIRED CONFIG NAMES exiv2)

link_libraries(exiv2lib)

add_executable(testApp test.cpp)
add_executable(issue783 issue783.cpp)
