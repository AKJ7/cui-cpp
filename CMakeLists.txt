cmake_minimum_required(VERSION 3.10)

project(cui-cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_HOME_DIRECTORY ${PROJECT_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(cui-cpp test/test.cpp include/cui-cpp/cui_cpp.cpp include/cui-cpp/cui_cpp.hpp)