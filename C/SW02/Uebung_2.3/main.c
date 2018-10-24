/**
 * HSLU HS18 MC
 * Übung 2.3: Entwurf Übung mit Vektoren und malloc
 * 
 * Entwerfen Sie eine eigene Übung zum Thema Vektoren und malloc, analog der weiteren
 *  freiwilligen Aufgabe 'Fibonacci'.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>
#include <stdlib.h>

/**
* Gibt Fibonaccis 
*/

int fib(int n);
/**
 * main function
 */
int main (int argc, char **argv) {
    
    int n, i, l;
    int * fibs;

    do {
        printf("Hallo\n");
        printf("Wieviele Fibonacci-Nummern möchtest du haben?\n");
        scanf("%d", &n);
    } while (n > 100 || n < 0);
    
    l = n+1;
    fibs = (int*) malloc(sizeof(int) * l);

    for (i = 0; i < l; i++) {
        printf("%2d = %9d\n", i, fibs[i] = fib(i) );
    }
    return 0;
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib (n-2);
}

