cmake_minimum_required(VERSION 3.26)
project(Ueb02_C C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-lm")

add_executable(Ueb02_C
        Ueb02.c
        geometry.h
        overflow.h
        geometry.c
        overflow.c
        floatingpoint.c
        floatingpoint.h
)

