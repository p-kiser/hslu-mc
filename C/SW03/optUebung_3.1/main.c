/**
 * HSLU HS18 MC
 * Freiwillige Aufgabe 3.1: Umwandlung byte[] nach float
 * 
 * @author Pascal Kiser
 * @date 04.10.2018
 * @version 1.0
 */
#include <stdio.h>

#define SIZE 4

typedef union{
    float f;
    char b[SIZE];
} number_t;

int main () {
    int i;

    char bytes[] = {0x56, 0x0e, 0x49, 0x40}; //== 3.1415

    number_t number;
    for (i = 0; i < SIZE; i++) {
        number.b[i] = bytes[i];
    }
    printf("Float: %f\n", number.f);

    return 0;
}