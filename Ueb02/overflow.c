//
// Created by Akasur on 08.10.2023.
//
#include <stdio.h>
#define INT_MAX (2147483647)
#define INT_MIN (-2147483648)

int overflow() {
    int zahl1;
    int zahl2;

    //Start und Eingabe
    printf("<--Programm zur Erkennung eines Ueberlaufes bei der Addition mit zwei Int-Werten-->\n");
    printf("Geben sie zwei Ganzzahlige Ziffern oder (0) (0) ein um immer einen Ueberlauf zu provozieren\n");
    printf("Erste Zahl:");
    scanf("%d", &zahl1);
    printf("Zweite Zahl:");
    scanf("%d", &zahl2);

    if(zahl1 > 0 && zahl2 > INT_MAX - zahl1)
        printf("Es kam zu einem Overflow.");
    else if(zahl1 < 0 && zahl2 < INT_MIN - zahl1)
        printf("Es kam zu einem Underflow.");
    else
        printf("Ergebnis: %i", zahl1 + zahl2);
    return 0;
}