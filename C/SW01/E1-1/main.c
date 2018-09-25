/**
 * Übung 1.1: Entwurf Übung mit Funktionen und for - Schleife
 * 
 * Entwerfen Sie eine eigene Übung zum Thema Funktionen und for-Schleife, analog der Aufgabe
 * 'Umrechnung Fahrenheit -> Celsius mit Funktion'
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */

#include <stdio.h>

/**
 * Fizzbuzz von 1 bis 100
 */

#define MIN 1
#define MAX 100

#define FIZZ "Fizz"
#define BUZZ "Buzz"

/**
 * Prints the passed integer to the standard output or replaces it with
 *  - "Fizz" if the number is divisible by 3
 *  - "Buzz" if the number is divisible by 5
 *  - "FizzBuzz" if both
 * @param number integer to replace or print
 */

void fizz(int number);

int main (int argc, char **argv) {
    for(int i = MIN; i <= MAX; i++) {
        fizz(i);
    }
    return 0;
}

void fizz(int number) {
    if (number % 15 == 0) {
        printf("%s%s\n", FIZZ, BUZZ);
    } else if (number % 3 == 0) {
        printf("%s\n", FIZZ);
    } else if (number % 5 == 0) {
        printf("%s\n", BUZZ);
    } else {
        printf("%d\n", number);
    }
}
