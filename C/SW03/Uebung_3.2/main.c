/**
 * HSLU HS18 MC
 * Übung 3.2: Entwurf einer Übung zum Thema Union
 * Entwerfen Sie eine Übung analog der Aufgabe in Kapitel 3 wo Sie Unions einsetzen.
 * Schreiben Sie eine Aufgabenstellung und erarbeiten Sie die Musterlösung.
 *
 * @author Pascal Kiser
 * @date 04.10.2018
 * @version 1.0
 */
#include <stdio.h>
#include <stdlib.h>


#define SIZE 4
/**
 * Print every Byte in a float as a hex number.
 */
typedef union{
    float f;
    char b[SIZE];
} number_t;

int main () {
    int i;
    number_t number;
    number.f = 3.1415;

    printf("Float: %f\n", number.f);

    for(i = 0; i < SIZE; i++) {
            printf("Byte %d: 0x%2x\n", i, number.b[i]);
    }
    return 0;
}