//
// Created by whuebner on 27.10.23.
//
#include "stdio.h"
#include "ascii_art.h"

int ascii_art(){

    for (int i = 32; i < 255; ++i) {
        printf("%c", (char)i);
    }
    return 0;
}