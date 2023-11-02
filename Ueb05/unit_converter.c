//
// Created by whuebner on 27.10.23.
//
#include "stdio.h"
#include "unit_converter.h"
#include "unit_converter_sub/conv_length.h"
#include "unit_converter_sub/conv_area.h"
#include "unit_converter_sub/conv_weight.h"
#include "unit_converter_sub/conv_temp.h"

int unit_converter(){
    char menu;
    char strin[32];
    printf("<--program for conversion of units-->");
    printf("please choose one of the following units:\n"
           "(a) - length\t(b) - area\n(c) - weight\t(d) - temperature\n");
    do {
        fgets(strin, 32, stdin), fflush(stdin);
        sscanf(strin, "%c", &menu);
        if(menu != 'a' && menu != 'b' && menu != 'c' && menu != 'd') printf("wrong input");
    } while (menu != 'a' && menu != 'b' && menu != 'c' && menu != 'd');
    switch (menu) {
        case 'a':
            conv_length();
            break;
        case 'b':
            conv_area();
            break;
        case 'c':
            conv_weight();
            break;
        case 'd':
            conv_temp();
            break;
        default:
            return -1;
    }
    return 0;
}