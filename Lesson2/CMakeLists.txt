cmake_minimum_required(VERSION 3.25)
project(Lesson2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lesson2 main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h)
