cmake_minimum_required(VERSION 3.26)
project(Ueb03_C C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-lm")

add_executable(Ueb04_C
        Ueb04.c
        xor_crypt.c
        xor_crypt.h
        bit_operators.c
        bit_operators.h
)

