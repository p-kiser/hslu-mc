/**
 * HSLU HS18 MC
 * Übung 2.4:  Enum to String
 * 
 * Schreiben Sie eine Funktion, die zu dem übergebenen enum-Wert (z.B. color_t) die entsprechende
 * String-Repräsentation zurückgibt.
 * Deklarieren Sie dazu einen eigenen enum-Typ und verwenden Sie diesen Typ in der Parameterliste
 * der Funktion.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>

/**
 * main function
 */


enum superbool {True = 1, False = 0, Maybe = -1};


void gibString(enum superbool b);

int main (int argc, char **argv) {
    
    enum superbool b;
    b = Maybe;
    gibString(b);
    return 0;
}

void gibString (enum superbool b) {
    switch (b) {
        case True:
            printf("True\n");
            break;
        case False:
            printf("False\n");
            break;
            break;
        case Maybe:
        default:
            printf("Maybe\n");
    }
}