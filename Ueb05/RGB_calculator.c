//
// Created by whuebner on 27.10.23.
//
#include "stdio.h"
#include "RGB_calculator.h"

int compl_calc(int color){
    int compl;
    compl = 255 - color;
    return compl;
}

int RGB_calculator(){
    char str_in[32];
    int red, green, blue;
    printf("<--program for RGB-webcode & complement-->");

    printf("\nplease input a value between 0 and 255 for Red:\n");   //Red
    do {
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%d", &red);
        if (red < 0 || red > 255) printf("value invalid\n");
    } while (red < 0 || red > 255);

    printf("\nplease input a value between 0 and 255 for Green:\n");    //Green
    do {
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%d", &green);
        if (green < 0 || green > 255) printf("value invalid\n");
    } while (green < 0 || green > 255);

    printf("\nplease input a value between 0 and 255 for Blue:\n");     //Blue
    do {
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%d", &blue);
        if (blue < 0 || blue > 255) printf("value invalid\n");
    } while (blue < 0 || blue > 255);

    printf("Input values as webcode:\n\t#%02X%02X%02X", red, green, blue);      //Output as webcode
    printf("\ncomplement as webcode:\n\t#%02X%02X%02X", compl_calc(red), compl_calc(green),
           compl_calc(blue));

    return 0;
}