//
// Created by Akasur on 22.10.2023.
//
#include<stdio.h>
#include "ascii_art.h"
#include "RGB_calculator.h"
#include "unit_converter.h"

int main() {
    char run = 'y', choice;
    printf("<--program for exercise 5-->");
    do {                    //loop for multiple program runs
        do {                //loop for correct input to choose program
            printf("\nChoose one of the following programs:\n");
            printf("(a) - ascii-art\n(b) - RGB-calculator\n(c) - unit-converter\n");
            fgets(&choice, 256, stdin), fflush(stdin);
            switch (choice) {        //select sub-program
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
                    printf("wrong input");
            }
        } while (choice != 'a' && choice != 'b' && choice != 'c');
        printf("\n\nStart another run? [y|n]\n");
        fgets(&run, 256, stdin), fflush(stdin);
    }while(run != 'n');
    return 0;
}

