cmake_minimum_required(VERSION 3.10)

project(LibraryManagementSystem LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find xlnt library
find_package(xlnt REQUIRED)

# Find tabulate library
find_package(tabulate REQUIRED)

add_executable(LibraryManagementSystem main.cpp)

# Link libraries
target_link_libraries(LibraryManagementSystem xlnt tabulate)