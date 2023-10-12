//
// Created by whuebner on 11.10.23.
//
#include<stdio.h>
//#include "geometry.h"
//#include "floatingpoint.h"
//#include "overflow.h"


int main() {
    char input;
    printf("<--Programm für Aufgabenblatt_03 Prog3 WiSe23/24-->\n");
    printf("Wählen sie aus folgenden Programmen aus:\n");
    printf("(a) - geometry\n(b) - floatingpoint\n(c) - overflow\n");
    scanf(" %c", &input);

    switch (input) {
        case 'a':
            //geometry();
            break;
        case 'b':
            //floatingpoint();
            break;
        case 'c':
            //overflow();
            break;
        default:
            return -1;
    }
    return 0;
}