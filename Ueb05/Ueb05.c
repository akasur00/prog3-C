//
// Created by Akasur on 22.10.2023.
//
#include<stdio.h>
#include "ascii_art.h"
#include "RGB_calculator.h"
#include "unit_converter.h"


int selector(char input){
    switch (input) {
        case 'a':
            ascii_art();
            break;
        case 'b':
            RGB_calculator();
            break;
        case 'c':
            unit_converter();
            break;
        default:
            return -1;
    }
    return 0;
}

int main() {
    char seletion, run;
    printf("<--program for exercise 5-->\n");


    while(run != 'y'){
        printf("Choose one of the following programs:\n");
        printf("(a) - ascii-art\n(b) - RGB-calculator\n(c) - unit-converter\n");


        printf("start another run? [y|n]\n")
        scanf("%c" &run);
        }
    }
    scanf(" %c", &input);

    //Check input
    while(selector(input) != 0){
        printf("wrong input, try again\n");
        scanf("%c", &input);
    }
    //call subprogram
    selector(input);

    //ask for other run



    return 0;
}

