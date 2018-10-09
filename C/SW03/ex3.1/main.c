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

#define MAX_LEN 50

typedef struct name_s {
    char* firstname;
    char* lastname;
} name_t;

typedef struct node_s {
    name_t name;
    node_t* next;
} node_t;

//typedef struct node_t* nodePtr_t;
//typedef struct name_t* namePtr_t;

/**
 * Create a new name object and add it to the parent node
 * @param parent Parent Node
 * @param name Name to add
 * @return pointer to current node
 */
node_t* addName(node_t *parent, name_t name);

name_t getName();

int main (int argc, char **argv) {
    
    node_t *list_head = NULL;
    node_t *node = list_head;
    int exit = 0;
    int i = 0;
    while (!exit) {
        node = addName(node, getName());
        if (i > 3) {
            exit = 1;
        }
    }


    return 0;
}

name_t getName() {
    char* firstname;
    char* lastname;
    printf("First name: ");
    scanf("%s", firstname);
    printf("Last name: ");
    scanf("%s", lastname);
    name_t name = {firstname, lastname, NULL};
    
    return name;
}

node_t* addName(node_t *parent, name_t name) {
    if (parent == NULL) {
        
    }
}


