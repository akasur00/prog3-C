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
float stone_to_kilogram(float stone){
    float kilogram;
    kilogram = stone * 6.35029f;
    return kilogram;
}

float conv_weight(){
    char input_unit;
    char str_in[32];
    float input_value;

    printf("<--Weight units-->");
    printf("\nplease choose the unit of the input:\n(a) - pound\t(b) - stone\n");

    do {                                                                //choose input unit
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%c", &input_unit);
        if (input_unit != 'a' && input_unit != 'b') printf("wrong input");
    } while (input_unit != 'a' && input_unit != 'b');

    printf("please input value \n");
    fgets(str_in, 32, stdin), fflush(stdin);    //input value number
    sscanf(str_in, "%f", &input_value);

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