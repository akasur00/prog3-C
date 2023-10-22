//
// Created by Akasur on 22.10.2023.
//
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
    char in [256];
    printf("<--program for encryption and decryption of strings based of XOR-operations-->\n");
    printf("please input a  string for encryption and a char as the key:\n");
    scanf("%s", &in);
    printf("\nInput was: %s", in);
    printf("\nkey was: %c", randchar(in));
    crypt_8bit(in, randchar(in));
    return 0;
}
