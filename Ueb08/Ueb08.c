//
// Created by Akasur on 22.10.2023.
//
#include<stdio.h>
#include "slanted_throw.h"
#include "unit_converter_generic.h"

int main() {
    char str_in[32];
    char run, choice;

    printf("<--program for exercise 8-->");

    do {                    //loop for multiple program runs
        printf("\nChoose one of the following programs:\n");
        printf("(a) - slanted throw\t(b) - unit_converter\n");

        do {                //loop for correct input to choose program
            fgets(str_in, 32, stdin), fflush(stdin);
            sscanf(str_in, "%c", &choice);
            if(choice != 'a' && choice != 'b') printf("wrong input");
        } while (choice != 'a' && choice != 'b');

        switch (choice) {        //select sub-program
            case 'a':
                slanted_throw();
                break;
            case 'b':
                unit_converter_generic();
                break;
            default:
                return -1;
        }

        printf("\n\nStart another run? [y|n]\n");
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%c", &run);
    }while(run != 'n');

    return 0;
}

