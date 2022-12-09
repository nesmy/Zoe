cmake_minimum_required(VERSION 3.24.2)

project(Zoe)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(vendor/glfw)

target_include_directories(${PROJECT_NAME}  
    PUBLIC include
    PUBLIC vendor/glfw/include
    PUBLIC vendor/glad/include)

target_link_directories(${PROJECT_NAME}
    PUBLIC vendor/glfw/src
    PUBLIC vendor/glad/src)

target_link_libraries(${PROJECT_NAME}
    glfw)
