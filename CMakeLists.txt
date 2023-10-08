cmake_minimum_required(VERSION 3.26)
project(prog3_C C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-lm")

add_executable(prog3_C
        Ueb02/Ueb02.c
        Ueb02/geometry.h
        Ueb02/overflow.h
        Ueb02/geometry.c
        Ueb02/overflow.c
        Ueb02/floatingpoint.c
        Ueb02/floatingpoint.h
)

