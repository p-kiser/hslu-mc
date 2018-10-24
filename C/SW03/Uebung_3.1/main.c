/**
 * HSLU HS18 MC
 * Übung 3.1: Liste mit Namen/Vornamen 
 * 
 * 
 * @author Pascal Kiser
 * @date 09.10.2018
 * @version 1.0
 */

 #ifdef __STDC_ALLOC_LIB__
#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

typedef struct name {
    char* firstname;
    char* lastname;
    struct name *next;
    int i;
} name;

int main() {
    
    name *head = NULL;
    name *node = NULL;
    char firstname[MAX_LEN];
    char lastname[MAX_LEN];
    int exit = 0;
    
    // Namen einlesen
    for(;;) {
        printf("Vorname:  ");
        exit = scanf("%s", firstname);
        if (exit <= 0) break; 

        printf("Nachname: ");
        exit = scanf("%s", lastname);
        if (exit <= 0) break; 

        node = (name*)malloc(sizeof(name));
        node->firstname = strdup(firstname);
        node->lastname = strdup(lastname);

        node->next = head;
        head = node;
    }

    // Namen ausgeben
    printf("\nNamen ausgeben: \n\n");
    for (node = head; node != NULL; node = node->next) {
        printf("%s %s\n", node->firstname, node->lastname);
    }

    // Aufräumen
     for (node = head; node != NULL;) {
        free(node->firstname);
        free(node->lastname);
        head = node->next;
        free(node);
        node = head;
    }   
}