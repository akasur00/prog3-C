//
// Created by Akasur on 08.10.2023.
//
#include <stdio.h>

int overflow() {
    int zahl1;
    int zahl2;
    int summe;
    int overflow;

    //Start und Eingabe
    printf("<--Programm zur Erkennung eines Ueberlaufes bei der Addition mit zwei Int-Werten-->\n");
    printf("Geben sie zwei Ganzzahlige Ziffern oder (0) (0) ein um immer einen Ueberlauf zu provozieren\n");
    printf("Erste Zahl:");
    scanf("%d", &zahl1);
    printf("\nZweite Zahl:");
    scanf("%d", &zahl2);


    //Ausgabe
    printf("Die Addition ergab: %i", summe, "\n");
    switch (overflow) {
        case 1:
            printf("Es kam zu einem Overflow.");
            break;
        case 0:
            printf("Es gab keinen Overflow.");
            break;
    }
    return 0;
}