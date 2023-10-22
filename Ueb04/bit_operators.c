//
// Created by Akasur on 22.10.2023.
//
#include "stdio.h"
#include "bit_operators.h"

int printBits_int(int n){
    //int n2 = n;
    //int bits [32];
    //int length = sizeof(bits)/ sizeof(bits[0]);

    //fill array
    //for (int i = 0; i < length; ++i) {
    //        if (n2 % 2 == 1 || n2 % 2 == -1)
    //            bits[length - i - 1] = 1;
    //        else
    //            bits[length - i - 1] = 0;
    //        n2 /= 2;
    //}

    //printf("%d:\t\t", n);
    //for (int i = 0; i < length; ++i) {
    //    if(i % 4 == 0 && i > 0)
    //        printf(".");
    //    printf("%d", bits[i]);
    //}
    printf("%d:\t", n);
    int j = 0;
    //for loop with bitwise variable
    for (unsigned int i=1<<31; i > 0; i >>= 1) {
        j++;
        if(n & i)
            printf("1");
        else
            printf("0");
        //set point
        if ((j % 4) == 0 && i>1)
            printf(".");
    }
    return 0;
}

int bit_operators(){
    int input, mask;
    printf("<--program for the display of bits for integers-->\n");
    printf("please input a number to be displayed:\n");
    scanf(" %i", &input);
    printf("input:\t\t"), printBits_int(input);
    printf("\nl shift <<2:\t"), printBits_int(input<<2);
    printf("\nr shift >>2:\t"), printBits_int(input>>2);
    printf("\ncomb shifts:\t"), printBits_int((input>>2)<<2);
    printf("\nnegation:\t"), printBits_int(~input);

    printf("\n\nnow input a number to be used as a mask:\n");
    scanf(" %i", &mask);
    printf("\n<--other Operators-->");
    printf("\ninput:\t\t"), printBits_int(input);
    printf("\nmask:\t\t"), printBits_int(mask);
    printf("\nAND &:\t\t"), printBits_int(input&mask);
    printf("\nXOR ^:\t\t"), printBits_int(input^mask);
    printf("\nOR |:\t\t"), printBits_int(input|mask);


    return 0;
}