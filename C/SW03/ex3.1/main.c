/**
 * HSLU HS18 MC
 * Übung 3.1: Liste mit Namen/Vornamen 
 * 
 * 
 * @author Pascal Kiser
 * @date 09.10.2018
 * @version 1.0
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 50

typedef struct name {
    char* firstname;
    char* lastname;
    struct name *next;
    int i;
} name;

int main() {
    
    name *head = NULL;
    char* firstname[MAX_LEN];
    char* lastname[MAX_LEN];
    int exit = 0;
    

        printf("Vorname:  ");
        scanf("%s", firstname);
        printf("%s, exit = %d\n", firstname, exit); 
}