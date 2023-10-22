//
// Created by Akasur on 22.10.2023.
//
#include "stdlib.h"
#include "stdio.h"
#include "xor_crypt.h"

//Create key from array
char randchar(char input []){
    char key;
    int sum;
    for (int i = 0; i < 256; ++i) {
        sum +=input[i];
    }
    key = sum % 256;
    return key;
}

//Crypt_Function
void crypt_8bit(char input[256], char key){
    //encryption
    char encrypted_string [256];
    for (int i = 0; i < 256; ++i) {
        encrypted_string[i] = input[i]^key;
    }
    printf("\n\nencrypted string:\n%s", encrypted_string);

    //decryption
    char decrypted_string [256];
    for (int i = 0; i < 256; ++i) {
        decrypted_string[i] = encrypted_string[i]^key;
    }
    printf("\n\ndecrypted string:\n%s", decrypted_string);
}

int xor_crypt(){
    printf("<--program for encryption and decryption of strings based of XOR-operations-->\n");

    //read in first string
    char in [256];
    printf("please input a  string for encryption:\n");
    scanf(" %255s", in);

    //look how long string is
    int i = 0;
    while(in[i] /= ' ')
        i++;
    i++;    //add 1 more for escape-sequence

    //create new smaller array
    char dynarray [i];
    for (int j = 0; j < i; ++j) {
        dynarray[j] = in[j];
    }


    printf("\nInput was: %s %d", dynarray, sizeof(dynarray));
    //printf("\nkey was: %c", randchar(dynarray));
    //crypt_8bit(dynarray, randchar(dynarray));
    return 0;
}
