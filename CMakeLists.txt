
cmake_minimum_required(VERSION 3.28)

project(PhysicsSimulator VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find the installed SFML package
find_package(SFML 3 REQUIRED COMPONENTS Graphics)

add_executable(physics_simulator
    src/main.cpp
)

target_link_libraries(physics_simulator
    PRIVATE SFML::Graphics
)
