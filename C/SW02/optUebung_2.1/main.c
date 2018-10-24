/**
 * HSLU HS18 MC
 * Übung 2.5: strcat
 * 
 * Schreiben Sie die Funktion mystrcat(s, t) (Sting concatenate) mit Zeigern, welche eine
 * Zeichenkette t an das Ende der Zeichenkette s kopiert.
 * Zur Erinnerung: Das '/0' Zeichen markiert das Ende einer Zeichenkette
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>

/**
 * main function
 */

void mystrcat(char* s, char* t);

int main (int argc, char **argv) {
    
    char * s = "Hello";
    char * t = "Werld!";
    printf("'%s' + 't' = ", s ,t);
    mystrcat(s,t);
    printf("'%s'\n", s);
    return 0;
}

void mystrcat(char* s, char* t) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        i++;
    }
    while (t[j] != '\0') {
        s[i] = t[j];
        i++;
        j++;
    }
    s[++i] = '\0'; 
}
