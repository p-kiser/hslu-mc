/**
 * HSLU HS18 MC
 * Übung 1.5: Umrechnung Fahrenheit -> Celsius mit Funktion:
 * 
 * Schreiben Sie ein Programm welches Temperaturen in Fahrenheit in Grad Celsius umrechnet.
 * Regel: °C = (5/9) · (°F – 32)
 * Implementieren Sie diese Formel in einer Funktion.
 * Das Programm soll die Umrechnung für Werte zwischen 0 °F und 210 °F, in Schritten von 15 °F,
 * machen. Dabei soll folgende Ausgabe erzeugt werden (linke Spalte: Temperatur in °F, rechte Spalte
 * Temperatur in °C
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>
/**
 * Ausgabe Tablle Fahrenheit zu Celsius 
 */

#define LOWER 0
#define UPPER 210
#define STEP  15

/**
 * Converts fahrenheit to celsius
 * @param fahrenheit
 * @return celsius
 */
float convertF2C(float f);

int main(int argc, char **argv) {
    printf("%6c\t%8c\n------------------\n", 'F', 'C');
    for (float i = LOWER; i <= UPPER; i+=STEP) {
        printf("%6.2f\t%8.4f\n", i, convertF2C(i));
    }
    return 0;
}

float convertF2C(float f) { return (5.0f/9.0f) * (f - 32.0f); }