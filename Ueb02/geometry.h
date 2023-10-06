#include <stdio.h>
#include <math.h>

//globale Variablen
double pi = 3.1415926535;
double laenge = 0;
int breite = 0;
double hoehe = 0;
int radius = 0;
double flaeche;
double volumina;

//Berechnung Pyramide
void pyramide() {
    laenge = 10;
    hoehe = 10;
    flaeche = pow(laenge, 2) + 4 * (1/2 * laenge * hoehe);
    volumina = 1/3 * pow(laenge, 2) * hoehe;
}

//Berechnung Wuerfel
void wuerfel() {
}

//Berechnung Kugel
void kugel() {
}

//Berechnung Zylinder
void zylinder() {
}

int geometry() {
    int eingabe;
    printf("<--Einfaches Programm zur Berechnung der Fläche und Volumina ausgewählter Formen-->\n\n");

    //Eingabe
    printf("Welches Geometrische Objekt wollen sie berechnen lassen?\n(1) - Pyramide \n(2) - Würfel \n(3) - Sphäre/Kugel \n(4) - Zylinder\n");
    scanf("%d", &eingabe);
    if(eingabe > 4 || eingabe < 1) {
        printf("Ungültige Eingabe, bitte wiederholen:\n");
        scanf("%d", &eingabe);
    }

    //Funktionsauswahl
    switch (eingabe) {
        case 1: pyramide();
        case 2: wuerfel();
        case 3: kugel();
        case 4: zylinder();
    }

    //Ausgabe
    return printf("Die Fläche beträgt: %d\nDas Volumina beträgt: %d", flaeche, volumina);
}