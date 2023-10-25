//
// Created by Akasur on 22.10.2023.
//
#include "stdio.h"
#include "xor_crypt.h"

void crypt(char array[], char key[], int length) {
    for (int i = 0; i < length; ++i) {
        array[i] = array[i] ^ key[i];
    }
}

int xor_crypt(){
    printf("<--program for encryption and decryption of strings based of XOR-operations-->\n");

    //read in first string
    char in [256];
    printf("please input a  string for encryption:\n");
    scanf(" %255s", in);

    //look how long input-string is
    int length = 0;
    while(in[length] != '\000')
        length++;
    length++;    //add 1 more for escape-sequence

    //create new smaller array (string)
    char dynarray [length];
    for (int i = 0; i < length; ++i) {
        dynarray[i] = in[i];
    }

    //Create key from input
    char key [length];
        for (int i = 0; i < length; ++i) {
            key[i] = dynarray[i] % length;
        }

    //Console-Output
    printf("\nInput was:\t\t\t%s", dynarray);
    //printf("\nkey is:\t\t\t%s", key);

    crypt(dynarray, key, length);     //encryption
    printf("\nencrypted string:\t%s", dynarray);

    crypt(dynarray, key, length);     //decryption
    printf("\ndecrypted string:\t%s", dynarray);

    return 0;
}

