//
// Created by Akasur on 08.10.2023.
//
#include <stdio.h>
#include <math.h>

//globale Variablen
float rad;
float side;
float height;
float flaeche;
float volumina;

//Berechnung Pyramide
void pyramide(float side_pyramide, float height_pyramide) {
    flaeche = powf(side_pyramide, 2) + 4.f * (1.f / 2.f * side_pyramide * height_pyramide);
    volumina = 1.f / 3.f * powf(side_pyramide, 2) * height_pyramide;
}

//Berechnung Wuerfel
void wuerfel(float side_wuerfel) {
    flaeche = powf(side_wuerfel, 2) * 6.f;
    volumina = powf(side_wuerfel, 3);
}

//Berechnung Kugel
void kugel(float rad_kugel) {
    flaeche = 4.f * M_PI * rad_kugel;
    volumina = ((4.f/3.f) * M_PI) * powf(rad_kugel, 3);
}

//Berechnung Zylinder
void zylinder(float rad_zylinder, float height_zylinder) {
    flaeche = 2.f * (M_PI * powf(rad_zylinder, 2)) + (2 * M_PI * rad_zylinder * height_zylinder);
    volumina = M_PI * powf(rad_zylinder, 2) * height_zylinder;
}

int geometry() {
    int eingabe;
    printf("<--Einfaches Programm zur Berechnung der Fläche und Volumina ausgewählter Formen-->\n\n");

    //Eingabe
    printf("Welches Geometrische Objekt wollen sie berechnen lassen?\n(1) - Pyramide \n(2) - Würfel \n(3) - Kugel \n(4) - Zylinder\n");
    scanf("%i", &eingabe);

    //Funktionsauswahl
    switch (eingabe) {
        case 1:
            printf("Geben sie die Laenge der Grundseite und die Hoehe ein:\n");
            scanf(" %f", &side);
            scanf(" %f", &height);
            pyramide(side, height);
            break;
        case 2:
            printf("Geben sie die Laenge der Seiten ein:\n");
            scanf(" %f", &side);
            wuerfel(side);
            break;
        case 3:
            printf("Geben sie den Radius der Kugel ein:\n");
            scanf(" %f", &rad);
            kugel(rad);
            break;
        case 4:
            printf("Geben sie den Radius und die Hoehe des Zylinders ein:\n");
            scanf(" %f", &rad);
            scanf(" %f", &height);
            zylinder(rad, height);
            break;
        default:
            return -1;
    }

    //Ausgabe
    return printf("Die Oberfläche beträgt: %f\nDas Volumina beträgt: %f", flaeche, volumina);
}