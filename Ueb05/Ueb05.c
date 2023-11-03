//
// Created by Akasur on 22.10.2023.
//
#include<stdio.h>
#include "ascii_art.h"
#include "RGB_calculator.h"
#include "unit_converter.h"

int main() {
    char str_in[32];
    char run, choice;

    printf("<--program for exercise 5-->");

    do {                    //loop for multiple program runs
        printf("\nChoose one of the following programs:\n");
        printf("(a) - ascii-art\n(b) - RGB-calculator\n(c) - unit-converter\n");

        do {                //loop for correct input to choose program
            fgets(str_in, 32, stdin), fflush(stdin);
            sscanf(str_in, "%c", &choice);
            if(choice != 'a' && choice != 'b' && choice != 'c') printf("wrong input");
        } while (choice != 'a' && choice != 'b' && choice != 'c');

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
                    return -1
            }

        printf("\n\nStart another run? [y|n]\n");
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%c", &run);
    }while(run != 'n');

    return 0;
}

