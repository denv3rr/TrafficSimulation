cmake_minimum_required(VERSION 3.10)
project(TrafficSimulation)

set(CMAKE_CXX_STANDARD 17)

# Include GLFW
include_directories(include)
link_directories(lib)

# Add source files
file(GLOB SOURCES "src/*.cpp")

add_executable(TrafficSimulation ${SOURCES})

# Link GLFW
target_link_libraries(TrafficSimulation glfw3)
