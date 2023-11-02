//
// Created by whuebner on 01.11.23.
//
#include "stdio.h"
#include "conv_weight.h"

float pound_to_kilogram(float pound){       //weights
    float kilogram;
    kilogram = pound * 0.45359237f;
    return kilogram;
}
float kilogram_to_pound(float kilogram){
    float pound;
    pound = kilogram / 0.45359237f;
    return pound;
}
float stone_to_kilogram(float stone){
    float kilogram;
    kilogram = stone * 6.35029f;
    return kilogram;
}
float kilogram_to_stone(float kilogram){
    float stone;
    stone = kilogram / 6.35029f;
    return stone;
}

float conv_weight(){
    char input_unit;
    char input_value_str[32];
    float input_value;
    printf("<--Weight units-->");
    printf("\nplease choose the unit of the input:\n(a) - pound\t(b) - stone\n");
    fgets(&input_unit, 256, stdin), fflush(stdin);
    printf("please input value \n");
    fgets(input_value_str, 32, stdin), fflush(stdin);
    sscanf(input_value_str, "%f", &input_value);
    switch (input_unit) {
        case 'a':
            printf("%0.2f lb ---> %0.2f Kg", input_value, pound_to_kilogram(input_value));  //pound to Kg
            return 0;
        case 'b':
            printf("%0.2f st ---> %0.2f Kg", input_value, stone_to_kilogram(input_value));   //stone to Kg
            return 0;
        default:
            return -1;
    }
}