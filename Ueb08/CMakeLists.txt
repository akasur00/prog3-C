cmake_minimum_required(VERSION 3.26)
project(Ueb03_C C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-lm")

add_executable(Ueb08_C
        Ueb08.c
        slanted_throw.c
        slanted_throw.h
        unit_converter_generic.c
        unit_converter_generic.h
)

