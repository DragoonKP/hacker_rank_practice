cmake_minimum_required(VERSION 3.8)
project(Person_hacker_rank)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.h)
add_executable(Person_hacker_rank ${SOURCE_FILES} Person.h)