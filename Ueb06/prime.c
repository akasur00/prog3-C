//
// Created by whuebner on 03.11.23.
//

#include "prime.h"
#include "stdio.h"
#include "stdlib.h"

int isPrime(int x) {
    if (x <= 1) return 0; // negatives, 0 and 1 are no primes by definition
    for (int i = 2; i <= x/2; i++) {
        if (x % i == 0) return 0; // if there is a divisor x is not prime
    }
    return 1; // x is prime
}

int isPrimeRec(int x, int div) {
    if (x==1) {
        return 0;
    } else if (x % div == 0) {
        return 0;
    } else {
        return isPrimeRec(x, div-1);
    }
}

int prime(){
    char str_in [32];
    int in = 0;

    printf("\n<--program for determining if prime-->\n");
    printf("Please input a number: ");

    do {
        fgets(str_in, 32, stdin), fflush(stdin);
            if(atoi(str_in)) {                      //check if input is valid
                in = atoi(str_in);
            } else {                                //else: dismiss input
                printf("invalid input  ");
            }
    } while (in == 0);

    (isPrime(in)) ? printf("%d ist eine Primzahl.", in) : printf("%d ist keine Primzahl", in);
    return 0;
}
