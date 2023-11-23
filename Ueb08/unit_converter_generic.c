//
// Created by Akasur on 23.11.2023.
//

#include "unit_converter_generic.h"
#include <stdio.h>

void unitconv (void *ptr, char unit){
    switch (unit) {
        case 'f':       //fahrenheit
            printf("%0.2f F ---> %0.2f C", *((double*)ptr), *((double*)ptr) - 32 * 5/9);
            break;
        case 'c':       //celsius
            printf("%0.2f C ---> %0.2f F", *((double*)ptr), *((double*)ptr) * 1.8f + 32);
            break;
        case 'm':       //meter
            printf("%0.2f m ---> %0.2f mi", *((double*)ptr), *((double*)ptr) / 1609.344f);
            printf("\n%0.2f m ---> %0.2f sm", *((double*)ptr), *((double*)ptr) / 1852.f);
            printf("\n%0.2f m ---> %0.2f ya", *((double*)ptr), *((double*)ptr) / 0.9144f);
            printf("\n%0.2f m ---> %0.2f ft", *((double*)ptr), *((double*)ptr) / 0.3048f);
            printf("\n%0.2f m ---> %0.2f in", *((double*)ptr), *((double*)ptr) / 0.0254f);
            break;
        case 'k':       //kilogram
            printf("%0.2f Kg ---> %0.2f lb", *((double*)ptr), *((double*)ptr) / 0.45359237f);
            printf("%0.2f Kg ---> %0.2f st", *((double*)ptr), *((double*)ptr) / 6.35029f);
        case 'a':       //for area, I don't know
            printf("%0.2f Km2 ---> %0.2f ac", *((double*)ptr), *((double*)ptr) / 247.105f);
            printf("%0.2f Km2 ---> %0.2f ha", *((double*)ptr), *((double*)ptr) / 100);
            printf("%0.2f Km2 ---> %0.2f saarlands", *((double*)ptr), *((double*)ptr) / 2569.69f);
            break;
        default:
            return;
    }
}

int unit_converter_generic(){
    double input_value;
    char unit;
    char str_in[32];
    printf("<--program for conversion of units-->\n\n");
    printf("please input a number and a unit:\n");

    fgets(str_in, 32, stdin), fflush(stdin);    //input for input_value
    sscanf(str_in, "%lf", &input_value);

    fgets(str_in, 32, stdin), fflush(stdin);   //input for unit
    sscanf(str_in, "%c", &unit);

    printf("input was: %.2f, %c\n", input_value, unit);
    unitconv(&input_value, unit);
    return 1;
}