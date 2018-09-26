/**
 * HSLU HS18 MC
 * Übung 2.2: Integer to String
 * 
 * Schreiben Sie eine Funktion char* itoa(int i), welche die übergebene Integerzahl in
 * dezimaler Darstellung als Zeichenkette zurückgibt. Die dazu benötigte Zeichenkette soll dynamisch
 * alloziert werden.
 * Zur Berechnung der Anzahl Zeichen eines Wertes in dezimaler Darstellung können Sie den 10er
 * Logarithmus mit der Funktion log10(…) berechnen. Den Absolutwert einer Zahl erhalten Sie mit
 * der Funktion abs(…).
 * #include <math.h>
 * double log10(double z);
 * int abs(int z);
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * TODO
 */
#define ASCII 48
/**
 * Gibt übergebene Integerzahl in dezimaler Darstellung als Zeichenkette zurück.
 */
//const char * itoa(int i);

/**
 * Kehrt einen String um
 * @param  s Input-String
 * @param length Länge des char-Arrays
 * @return r Umgehrter String
 */
char * reverse(char s[], int length);

/**
 * Gibt Anzahl Stellen einer Integerzahl zurück
 */
int getDigits(int i);

/** 
 * Bestimmt, ob eine Zahl negativ ist
 * @param Zu überprüfende Integerzahl
 * @return 1 für negative Zahlen, sonst 0
 */
int isNegative(int i);

int main(int argc, char **argv) {
   
   int n = -453;
   printf("Enter a Number: ");
   scanf("%d", &n);

    /*
   printf("Number of digits: %d\n", getDigits(n));
   printf("Is negative: %s\n\n", isNegative(n) ? "True" : "False");
   */

   printf("\n%s\n", itoa(n));
   return 0;
}

const char * itoa(int n) {
    
    int length =  getDigits(n) + 1 ;
    char * s = malloc(sizeof(char) * length + isNegative(n));
    int index = 0;
    
    int t;
    if (isNegative(n)) {
        s[index++] = '-';
    }
    n = abs(n);
    for (int i = getDigits(n); i > 0; i--) {
        t = (int)pow(10.0f, (float)i-1);
        s[index++] = n/t+ASCII;
        n -= t * (n/t);
   }
    s[index++] = '\0';
    return s;
}

int getDigits(int i) { return log10(abs(i)) + 1; }

int isNegative(int i) { return (i<0); }

char * reverse(char s[], int length) {
    char t;
    int last = length-1;
    for(int i = 0; i < length/2; i++) {
        t = s[i];
        s[i] = s[last-i];
        s[last-i] = t;
    }
    return s;
}
