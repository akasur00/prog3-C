cmake_minimum_required(VERSION 3.26)
project(Ueb03_C C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-lm")

add_executable(Ueb03_C
        Ueb03.c
        prog_limits.c
        prog_limits.h
        compute_seconds.c
        compute_seconds.h
        temperature.c
        temperature.h
)

