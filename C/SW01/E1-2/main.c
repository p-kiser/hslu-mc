/**
 * HSLU HS18 MC
 * Übung 1.2: Entwurf Übung mit Funktionen und while Schlaufe
 * 
 * Entwerfen Sie eine eigene Übung zum Thema Funktionen und while-Schleife, analog der Aufgabe
 * 'Grösster gemeinsamer Teiler (ggT) mit while Schlaufe'.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */

#include <stdio.h>

/**
 * C Programm to find the Least Common Multiple (LCM) of two numbers
 */

/**
 * Prints the passed number to the standard output or replaces it with
 *  - "Fizz" if the number is divisible by 3,
 *  - "Buzz" if the number is divisible by 5
 *  - "FizzBuzz" if both
 * @param number integer to replace or print
 */
int lcm(int a, int b);

int a,b;

int main (int argc, char **argv) {
    printf("Least Common Multiple\n***********************\n\n");
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    printf("The Least Common Multiple of %d and %d is %d.\n", a, b, lcm(a,b));
    return 0;
}

int lcm(int a, int b) {
    int result = a > b ? a : b;

    while(!(result % a == 0 && result % b == 0)) {
        ++result;
    }
    return result;
}
