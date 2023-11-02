//
// Created by whuebner on 01.11.23.
//
#include "stdio.h"
#include "conv_temp.h"

float fahrenheit_to_celsius(float fahrenheit){      //temperature
    float celsius;
    celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
float celsius_to_fahrenheit(float celsius){
    float fahrenheit;
    fahrenheit = celsius * 1.8f + 32;
    return fahrenheit;
}

float conv_temp(){
    char input_unit;
    char input_value_str[32];
    float input_value;
    printf("<--Temperature units-->");
    printf("\nplease choose the unit of the input:\n(a) - Celsius\t(b) - Fahrenheit\n");
    fgets(&input_unit, 256, stdin), fflush(stdin);
    printf("please input value \n");
    fgets(input_value_str, 32, stdin), fflush(stdin);
    sscanf(input_value_str, "%f", &input_value);
    switch (input_unit) {
        case 'a':
            printf("%0.2f °C ---> %0.2f °F", input_value, celsius_to_fahrenheit(input_value));  //Celsius to Fahrenheit
            return 0;
        case 'b':
            printf("%0.2f °F ---> %0.2f °C", input_value, fahrenheit_to_celsius(input_value));   //Fahrenheit to Celsius
            return 0;
        default:
            return -1;
    }
}