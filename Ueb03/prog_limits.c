//
// Created by whuebner on 12.10.23.
//

#include "prog_limits.h"
#include "limits.h"
#include "stdio.h"

int prog_limits(){
    printf("<--Programm für die Darstellung der Werte-Limits verschiedener Datentypen-->\n");

    //Tabellenkopf
    printf("Datentyp\t\t\t\t Min/Max Wert");

    //Char-Datentyp
    printf("\nchar max:\t\t\t\t %i", CHAR_MAX);
    printf("\nchar min:\t\t\t\t %i", CHAR_MIN);
    printf("\nunsigned char:\t\t\t %i", UCHAR_MAX);

    //Integer Datentyp
    printf("\nshort int max:\t\t\t %i", SHRT_MAX);
    printf("\nshort int min:\t\t\t %i", SHRT_MIN);
    printf("\nshort unsigned int max:\t %i", USHRT_MAX);

    printf("\nint max:\t\t\t\t %i", INT_MAX);
    printf("\nint min:\t\t\t\t %i", INT_MIN);
    printf("\nunsigned int max:\t\t %u", UINT_MAX);

    printf("\nlong max:\t\t\t\t %li", LONG_MAX);
    printf("\nlong min:\t\t\t\t %li", LONG_MIN);
    printf("\nunsigned long max:\t\t %lu", ULONG_MAX);

    return 0;
}