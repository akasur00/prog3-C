//
// Created by whuebner on 01.11.23.
//
#include "stdio.h"
#include "conv_area.h"

float acre_to_km2 (float acre){         //areas
    float km2;
    km2 = acre * 247.105f;
    return km2;
}
float hectare_to_km2(float hectare){
    float km2;
    km2 = hectare * 100;
    return km2;
}
float saarland_to_km2(float saarland){
    float km2;
    km2 = saarland * 2569.69f;
    return km2;
}

float conv_area (){
    char input_unit;
    char str_in[32];
    float input_value;

    printf("<--area/surface units-->");
    printf("\nplease choose the unit of the input:\n(a) - acre\t(b) - hectare\t(c) - saarland\n");

    do {                                                                //choose input unit
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%c", &input_unit);
        if (input_unit != 'a' && input_unit != 'b' && input_unit != 'c') printf("wrong input");
    } while (input_unit != 'a' && input_unit != 'b' && input_unit != 'c');

    printf("please input value \n");
    fgets(str_in, 32, stdin), fflush(stdin);    //input value number
    sscanf(str_in, "%f", &input_value);

    switch (input_unit) {
        case 'a':
            printf("%0.2f ac ---> %0.2f Km2", input_value, acre_to_km2(input_value));
            return 0;
        case 'b':
            printf("%0.2f ha ---> %0.2f Km2", input_value, hectare_to_km2(input_value));
            return 0;
        case 'c':
            printf("%0.2f saarlands ---> %0.2f Km2", input_value, saarland_to_km2(input_value));
            return 0;
        default:
            return -1;
    }
}