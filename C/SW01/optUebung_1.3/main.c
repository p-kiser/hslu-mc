/**
 * HSLU HS18 MC
 * Übung 0: Hello World 
 * 
 * Schreiben Sie ein Programm, das Wörter zählt und das Ergebnis ausgibt.
 * Dabei lesen Sie solange einzelne Zeichen ein (mit der Funktion getchar()), bis sie ein EOF Zeichen
 * erhalten.
 * Als Trennzeichen zwischen den Worten gelten ' ' (Blanks), '\t' (Tabs) und '\n' (Zeilenumbrüche).
 * Zum Testen rufen Sie das Programm auf der Kommandozeile auf und verwenden die
 * Standardeingabe aus einer Datei (z.B. CountWords.exe < CountWords.c)
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>

/**
 * Zählt die Anzahl Wörter
 */
#define IN 1
#define OUT 2

int main(int argc, char const **argv) {
    int c;
    int n = 0;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT){
            ++n;
            state = IN;
        }
    }
    printf("Word count: %d\n", n);
    return 0;
}
