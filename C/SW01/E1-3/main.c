/**
 * HSLU HS18 MC
 * Übung 1.3: Integer nach Binary (iToBinary)
 * 
 * Schreiben Sie ein Programm, welches eine 32-Bit Integer-Zahl in Binärdarstellung ausgibt.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */

#include <stdio.h>

#define SIZE 32

int number, sizeOfNumber;
char binary[SIZE+1];

int main (int argc, char **argv) {

    printf("Integer to Binary\n***********************\n\n");
    printf("Enter a number: \n");
    scanf("%d", &number);

    for (int i = 0; i < SIZE; i++) {
        binary[SIZE-1-i] = number & 0x1 ? '1' : '0';
        number = number >> 1;
    }
    binary[SIZE] = '\0';
    printf("%s\n", binary);
    return 0;
}
