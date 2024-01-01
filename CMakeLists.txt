cmake_minimum_required(VERSION 3.26)
project(OGL_HelloWorld)

set(CMAKE_CXX_STANDARD 17)

# Find GLFW
find_package(glfw3 REQUIRED)

# Include glad headers
include_directories(glad/include)

# Create executable
add_executable(${CMAKE_PROJECT_NAME} main.cpp glad/src/glad.c)

# Link GLFW
target_link_libraries(${CMAKE_PROJECT_NAME} glfw)

