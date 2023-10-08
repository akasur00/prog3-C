//
// Created by Akasur on 08.10.2023.
//
#include <stdio.h>
#include <math.h>

//globale Variablen
float pi = 3.141592f;
float radius;
float laenge;
float hoehe;
float flaeche;
float volumina;

//Berechnung Pyramide
void pyramide(float grundseite, float height) {
    flaeche = powf(grundseite, 2) + 4.f * (1.f / 2.f * grundseite * height);
    volumina = 1.f / 3.f * powf(grundseite, 2) * height;
}

//Berechnung Wuerfel
void wuerfel(float seite) {
    flaeche = powf(seite, 2) * 6.f;
    volumina = powf(seite, 3);
}

//Berechnung Kugel
void kugel(float rad) {
    flaeche = 4.f * pi * rad;
    volumina = ((4.f/3.f) * pi) * powf(rad, 3);
}

//Berechnung Zylinder
void zylinder(float rad, float h) {
    flaeche = 2.f * (pi * powf(rad, 2)) + (2 * pi * rad * h);
    volumina = pi * powf(rad, 2) * h;
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
            scanf(" %f", &laenge);
            scanf(" %f", &hoehe);
            pyramide(laenge, hoehe);
            break;
        case 2:
            printf("Geben sie die Laenge der Seiten ein:\n");
            scanf(" %f", &laenge);
            wuerfel(laenge);
            break;
        case 3:
            printf("Geben sie den Radius der Kugel ein:\n");
            scanf(" %f", &radius);
            kugel(radius);
            break;
        case 4:
            printf("Geben sie den Radius und die Hoehe des Zylinders ein:\n");
            scanf(" %f", &radius);
            scanf(" %f", &hoehe);
            zylinder(radius, hoehe);
            break;
        default:
            return -1;
    }

    //Ausgabe
    return printf("Die Oberfläche beträgt: %f\nDas Volumina beträgt: %f", flaeche, volumina);
}