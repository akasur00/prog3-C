//
// Created by whuebner on 27.10.23.
//
#include "stdio.h"
#include "ascii_art.h"
#include "limits.h"

int ascii_art(){
    printf("<--program for ascii-art-->");
    //print out all chars from 32 to 255
    for (int i = 32; i <= UCHAR_MAX; ++i) {
        printf("| %c\t%d\t%o\t%x", (unsigned char) i,i,i,i);
        (i % 11 == 0) ? printf("\n") : printf("\t\t");
    }

    //print out the ascii-art
    printf("\n\n ____  ____   ___    ____      ____  ____  ____       ____  ____  ______\n");
    printf("|    \\|    \\ /   \\  /    |    |    ||    ||    |     /    ||    \\|      |\n");
    printf("|  o  )  D  )     ||   __|     |  |  |  |  |  |     |  o  ||  D  )      |\n");
    printf("|   _/|    /|  O  ||  |  |     |  |  |  |  |  |     |     ||    /|_|  |_|\n");
    printf("|  |  |    \\|     ||  |_ |     |  |  |  |  |  |     |  _  ||    \\  |  |\n");
    printf("|  |  |  .  \\     ||     |     |  |  |  |  |  |     |  |  ||  .  \\ |  |\n");
    printf("|__|  |__|\\_|\\___/ |___,_|    |____||____||____|    |__|__||__|\\_| |__|\n");
    return 0;
}
