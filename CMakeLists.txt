cmake_minimum_required(VERSION 3.5)

project(heavy-duty LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(heavy-duty main.cpp heap-overflow.h stack-overflow.h)

install(TARGETS heavy-duty
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
