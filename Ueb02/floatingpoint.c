//
// Created by Akasur on 08.10.2023.
//
#include <stdio.h>
#include <math.h>
#define F1 0.1f
#define K 100.f

int floatingpoint() {
    float result;
    float sum;
    printf("<--Programm mit Beispielen für Floatingpoint-Ungenauigkeit-->\n");
    printf("\nRundungsfehler:\nRunden von 256.49999: %f\n", roundf(256.49999));

    //Rechnung zum Aufzeigen von Float-Fehlern
    for (int i = 1; i < K; ++i) {
        sum = sum + 0.1f;
    }
    result = K / 10.f - sum;

    printf("\nFehleransammlung bei mehrfacher Rechnung mit FLoatingpoints:");
    printf("\nErgebnis sollte 0 sein.");
    printf("\nErgebnis laut Programm: %f", result);

    return 0;
}