/**
 * HSLU HS18 MC
 * Übung 2.1: Reverse 
 * 
 * Schreiben Sie eine Funktion reverse(s), die die Zeichenkette s umkehrt. Benutzen Sie diese
 * Funktion dazu, ein Programm zu schreiben, das seine Eingabe zeilenweise umkehrt.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>
/**
 * Lies einen String ein kehrt ihn um
 */
#define LIMIT 100

/**
* Liest eine Zeile von maximal limit Zeichen ein.
* Die Zeichen werden (inklusive Zeilenende-Zeichen) im übergebenen
* Vektor s /0 terminiert abgelegt.
* @param s Zeiger auf den Vektor zum Speichern der Eingabe
* @param limit Maximale Grösse des Vektors
* @return Anzahl eingelesene Zeichen
*/
int readLine(char s[], int limit);

/**
 * Kehrt einen String um
 */
const char * reverse(char s[], int length);


int main(int argc, char **argv) {

    char s[LIMIT];
    int count = 0;
    while (getchar() != EOF) {
        count  = readLine(s, LIMIT);
        printf("%s\n", reverse(s, count));
    }
   
    return 0;
}

int readLine(char s[], int limit) {
    int i = 0;
    int c;

    c = getchar();
    while((c != EOF) && (c != '\n') && (i < limit - 1)) {
        s[i] = c;
        i++;
        c = getchar();
    }
    if (c == '\n') {
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';
    return i;
}

const char * reverse(char s[], int length) {
    char t;
    int last = length-1;
    for(int i = 0; i < length/2; i++) {
        t = s[i];
        s[i] = s[last-i];
        s[last-i] = t;
    }
    return s;
}