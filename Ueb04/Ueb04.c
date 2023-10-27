//
// Created by Akasur on 22.10.2023.
//
#include<stdio.h>
#include "bit_operators.h"
#include "xor_crypt.h"


int main() {
    char input;
    printf("<--program for exercise 4-->\n");
    printf("Choose one of the following programs:\n");
    printf("(a) - bit_operators\n(b) - xor_crypt\n");
    fgets(&input, 256, stdin);
    //scanf(" %c", &input);

    switch (input) {
        case 'a':
            bit_operators();
            break;
        case 'b':
            xor_crypt();
            break;
        default:
            return -1;
    }
    return 0;
}