cmake_minimum_required(VERSION 3.0)

set(myproject "Avioane")
# Project name
project(${myproject})

#standard minim C++
set(CMAKE_CXX_STANDARD 17)


# Define the executable
#add_executable(${PROJECT_NAME}
#				src/main.cpp
#				src/Airplane.cpp)

add_subdirectory(src)