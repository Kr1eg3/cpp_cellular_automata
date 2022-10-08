cmake_minimum_required(VERSION 3.23)
project(CellularAutomata)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(.)

add_executable(CellularAutomata main.cpp)

target_link_libraries(CellularAutomata ${OpenCV_LIBS})