cmake_minimum_required(VERSION 3.26)
project(Ueb03_C C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-lm")

add_executable(Ueb05_C
        Ueb05.c
        ascii_art.c
        ascii_art.h
        RGB_calculator.c
        RGB_calculator.h
        unit_converter.c
        unit_converter.h
        unit_converter_sub/conv_temp.c
        unit_converter_sub/conv_temp.h
        unit_converter_sub/conv_area.c
        unit_converter_sub/conv_area.h
        unit_converter_sub/conv_weight.c
        unit_converter_sub/conv_weight.h
        unit_converter_sub/conv_length.c
        unit_converter_sub/conv_length.h
)

