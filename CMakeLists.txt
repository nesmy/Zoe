cmake_minimum_required(VERSION 3.24.2)

project(Zoe)

add_executable(${PROJECT_NAME} src/main.cpp)

find_package(glfw3 REQUIRED)


target_link_libraries(${PROJECT_NAME} PUBLIC glfw)
