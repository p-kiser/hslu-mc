/**
 * HSLU HS18 MC
 * Übung 1.6: Grösster gemeinsamer Teiler (ggT) mit while Schlaufe
 * 
 * Im Modul PRG1 haben sie den Algorithmus von Euklid zur Bestimmung des grössten,
 * gemeinsamen Teilers kennengelernt:
 * Ermittlung des grössten, gemeinsamen Teilers (ggT) zweier natürlicher Zahlen A und B:
 * 1. Sei A die grössere der beiden Zahlen A und B (vertauschen, falls dies nicht bereits so ist)
 * 2. Setze A = A – B
 * 3. Wenn A und B ungleich sind, dann fahre fort mit Schritt 1, wenn sie gleich sind, dann beende
 * den Algorithmus: Diese Zahl ist der grösste, gemeinsame Teiler.
 * Implementieren Sie diesen Algorithmus mit Hilfe einer while() Schlaufe.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>
/**
 * Berechnung des ggT mit dem Algorithmus von Euklid
 */

/**
 * swaps two ints
 */
void swap(int *a, int *b);

int main(int argc, char **argv) {

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // euklid
    while (a != b) { 
        if (a < b) swap(&a,&b);
        a = a -b;
    }
    printf("Das ggT ist %d.", a);

    return 0;
}

void swap(int *x, int *y) {
    int t;
    t = *y;
    *y = *x;
    *x = t;
}


