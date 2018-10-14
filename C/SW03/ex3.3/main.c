/**
 * HSLU HS18 MC
 * Übung 3.3 Wörter zählen
 * 
 *
 * @author Pascal Kiser
 * @date 14.10.2018
 * @version 1.0
 */
#include <stdio.h>

#define MAXWORD 100
#define BUFSIZE 100

typedef struct node {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
} node;

int getch();
void ungetch(int);
int getword(char *, int);

int main () {

    //TODO
    return 0;
}
