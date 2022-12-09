cmake_minimum_required(VERSION 3.24.2)

project(Zoe)

file(GLOB SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

add_compile_definitions(STB_IMAGE_IMPLEMENTATION)

add_subdirectory(vendor/glfw)
add_subdirectory(vendor/glad)

target_include_directories(${PROJECT_NAME}  
    PUBLIC include
    PUBLIC vendor/glfw/include
    PUBLIC vendor/glad/include)

target_link_directories(${PROJECT_NAME}
    PUBLIC vendor/glfw/src
    PUBLIC vendor/glad/src)

target_link_libraries(${PROJECT_NAME}
    glfw
    glad)
