//
// Created by whuebner on 11.10.23.
//
#include<stdio.h>
#include "prog_limits.h"
#include "compute_seconds.h"
#include "temperature.h"


int main() {
    char input;
    printf("<--Programm für Aufgabenblatt_03 Prog3 WiSe23/24-->\n");
    printf("Wählen sie aus folgenden Programmen aus:\n");
    printf("(a) - prog_limits\n(b) - compute_seconds\n(c) - temperature\n");
    scanf(" %c", &input);

    switch (input) {
        case 'a':
            prog_limits();
            break;
        case 'b':
            compute_seconds();
            break;
        case 'c':
            temperature();
            break;
        default:
            return -1;
    }
    return 0;
}