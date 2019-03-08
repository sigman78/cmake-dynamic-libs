cmake_minimum_required(VERSION 3.4)

project(Main)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(lib-static)
add_subdirectory(lib-dynamic)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} LibDynamic)