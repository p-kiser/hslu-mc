/**
 * HSLU HS18 MC
 * Übung 1.4: Menu
 * 
 * Schreiben Sie das Gerüst zu einer textbasierten Menusteuerung.
 * Nach dem Starten des Programmes erscheint auf der Konsole eine Anzeige zur Selektion:
 * Durch Eingabe des entsprechenden Buchstabens kann dann die jeweilige Aktion (als
 * Funktionsaufruf, hier z.B. die Funktionen doA(), doB() und doC()) aufgerufen werden.
 * Nach dem jeweiligen Funktionsaufruf wird der Anzeigetext erneut auf die Konsole ausgegeben und
 * auf eine weitere Eingabe gewartet werden.
 * Mit der Eingabe von 'q' (oder 'Q') wird das Programm verlassen.
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#ifdef UNIX
#define CLEAR "clear"
#else 
#define CLEAR "cls"
#endif

/**
 * Draws the Menu
 */
void drawMenu();

void doA();
void doB(); // :3
void doC();

char input;
int main (int argc, char **argv) {
    
    system(CLEAR);
    
    do {
        drawMenu();
        input = toupper(getchar());
        fflush(stdin);
        switch(input) {
            case 'A':
                doA();
                break;
            case 'B':
                doB();
                break;
            case 'C':
                doC();
                break;
            case 'Q':
                printf("Exiting...\n");
                break;
            default:
            printf("Not a valid input: %c\n", input);
        }
        printf("\n");
    } while (input != 'Q');
    return 0;
}

void drawMenu() {
    printf("A --> Select menu item A\n");
    printf("B --> Select menu item B\n");
    printf("C --> Select menu item C\n");
    printf("Q --> Exit\n");
    printf("Enter selection: ");
}

void doA() { printf("Menu A selected\n"); }
void doB() { printf("Menu B selected\n"); }
void doC() { printf("Menu C selected\n"); }
