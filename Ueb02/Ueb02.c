#include<stdio.h>
#include "geometry.h"
#include "floatingpoint.h"
#include "overflow.h"

int main() {
    char input;
    printf("<--Programm für Aufgabenblatt_02 Prog3 WiSe23/24-->\n");
    printf("Wählen sie aus folgenden Programmen aus:\n");
    printf("(a) - geometry\n(b) - floatingpoint\n(c) - overflow\n");
    scanf(" %c", &input);

    switch (input) {
        case 'a':
            geometry();
            break;
        case 'b':
            floatingpoint();
            break;
        case 'c':
            overflow();
            break;
    }
    return 0;
}