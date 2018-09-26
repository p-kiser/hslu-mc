/**
 * HSLU HS18 MC
 * Übung 2.6: Fibonacci Zahlen
 * 
 * f(0) = 0
 * f(1) = 1
 * f(n) = f(n-1) + f(n-2)
 * 
 * Schreiben Sie ein Programm, welches den Benutzer abfragt, wie viele Fibonacci Zahlen berechnet
 * werden sollen.
 * Anschliessend allozieren Sie einen genügend grossen Vektor, berechnen und speichern gemäss
 * obiger Definition alle Fibonacci zahlen und geben Sie sie anschliessend aus.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * la sequenza di fibonacci
 */

/**
 * main function
 */
int main (int argc, char **argv) {

    int n,i,l;
    int * fibs;

    do {
        // prendi il numero
        printf("Ciao!\n");
        printf("Quanti numeri di fibonacci vuoi?\n");
        scanf("%d", &n);
        if(n < 1) {
            printf("sapientone! riprova!\n\n");
        }
    } while(n < 1);
    l = n+1;
    // assegnare memoria
    fibs = (int*) malloc(sizeof(int) * l);
    if(fibs) {
        fibs[0] = 0;
        fibs[1] = 1;
        //iteracci
        for (i = 2; i < l; i++) {
            fibs[i] = fibs[i-1] + fibs[i-2];
        }
        // presentare la sequenza
        printf("Ecco! Sequenza di fibonacci da 0 a %d:\n\n", n);
        for (i = 0; i < l; i++) {
            printf("fib(%d)\t= %6d\n", i, fibs[i]);
        }
    } else {
        // che palle!
        printf("Errore! Memoria non assegnata.");
    }
    // liberare i bit
    free(fibs);
    return 0;
}
