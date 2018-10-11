/**
 * HSLU HS18 MC
 * Übung 3.1: Liste mit Namen/Vornamen
 * 
 * Schreiben Sie ein Programm, welches in einer einfach verketteten Liste eine beliebige Anzahl
 * von Namen/Vornamen festhält. Allokieren Sie den Speicherplatz für Ihre Daten dynamisch.
 * Schreiben Sie ein Testprogramm, wo Sie diese Liste einsetzen, z.B. indem Sie über die Konsole
 * Namen/Vornamen eingeben und anschliessend die Liste ausgeben.
 * 
 * @author Pascal Kiser
 * @date 04.10.2018
 * @version 1.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct name* namePtr_t;
struct name {
    char* firstname;
    char* lastname;
    namePtr_t next;
} name_t;

void printNames(namePtr_t list);

int main (int argc, char **argv) {
    int exit = 0;
    //new list
    namePtr_t start = (namePtr_t)malloc(sizeof(name_t));
    start->next = NULL;
    int size = 0;
    namePtr_t node = start;
    while(!exit && size > 5) {
        namePtr_t node = (namePtr_t)malloc(sizeof(name_t));
        printf("\n%d. Name\nVorname eingeben: ", ++size);
        scanf("%s", node->firstname);
        fflush(stdin);
        printf("Nachname eingeben: ", size);
        scanf("%s", node->lastname);
        fflush(stdin);
        node
    }
    
    printf("*Namensliste:*\n\n");

    //printNames(list);
    return 0;
}

void printNames(namePtr_t list) {
    namePtr_t n = list;
    while (n != NULL) {
        printf("%s %s\n", n->firstname, n->lastname);
        n = n->next;
    }
}


