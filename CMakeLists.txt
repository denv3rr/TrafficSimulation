cmake_minimum_required(VERSION 3.10)
project(TrafficSimulation)

set(CMAKE_CXX_STANDARD 17)

# Include GLFW
include_directories(include)
link_directories(lib)

# Add source files
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

add_executable(TrafficSimulation ${SOURCES} ${HEADERS})

# Link GLFW
target_link_libraries(TrafficSimulation glfw3 glew32 opengl32)
