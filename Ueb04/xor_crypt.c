//
// Created by Akasur on 22.10.2023.
//
#include "stdio.h"
#include "xor_crypt.h"

int xor_crypt(){
    printf("<--program for encryption and decryption of strings based of XOR-operations-->\n");

    //read in first string
    char in [256];
    printf("please input a  string for encryption:\n");
    scanf(" %255s", in);

    //look how long string is
    int length = 0;
    while(in[length] != '\000')
        length++;
    length++;    //add 1 more for escape-sequence

    //create new smaller array
    char dynarray [length];
    for (int i = 0; i < length; ++i) {
        dynarray[i] = in[i];
    }

    //Create key from input
    char key [length];
        for (int i = 0; i < length; ++i) {
            key[i] = dynarray[i] % length;
        }
        //don't forget the escape
        //key[length] = '\000';

    //Encryption
    char encrypted_string [length];
    for (int i = 0; i < length; ++i) {
        encrypted_string[i] = dynarray[i]^key[i];
    }

    //decryption
    char decrypted_string [length];
    for (int i = 0; i < length; ++i) {
        decrypted_string[i] = encrypted_string[i]^key[i];
    }


    //Console-Output
    printf("\nInput was:\t\t%s Size: %d", dynarray, sizeof(dynarray));
    printf("\nkey is:\t\t\t%s", key);
    printf("\nencrypted string:\t%s Size: %d", encrypted_string, sizeof(encrypted_string));
    printf("\ndecrypted string:\t%s Size: %d", decrypted_string, sizeof(decrypted_string));
    return 0;
}

