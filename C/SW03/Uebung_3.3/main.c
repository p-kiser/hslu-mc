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
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
#define BUFSIZE 100

typedef struct tnode *NodePtr_t;
typedef struct tnode {
    char *word;
    int count;
    NodePtr_t left;
    NodePtr_t right;
} Node_t;

/* siehe auch Buch K&R S. 77 */
char buf[BUFSIZE];    /* Buffer fuer ungetch() */
int bufp = 0;     /* nächste freie Position für buf */

int getch(void){   /* nächstes Zeichen holen */
    return (bufp > 0 ? buf[--bufp] : getchar());
}

void ungetch(int c){
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

/* siehe auch Buch K&R S. 131 */
int getword(char *word, int lim){
    int c;
    char *w = word;
    while(isspace(c = getch()))
        ;    
    if (c != EOF)
        *w++ = c;
    if (!isalpha(c)) {
        *w = '\0';
        return(c);
    }
    for( ; --lim > 0; w++)
        if(!isalnum(*w = getch())){
            ungetch(*w);
            break;
        }
    *w ='\0';
    return word[0];
}

NodePtr_t addtree(NodePtr_t, char *);
void treeprint(NodePtr_t);
NodePtr_t newnode(char *);

/* Häufigkeit von Wörter zählen */
main(){
    NodePtr_t root;
    char word[MAXWORD];
    
    root = NULL;
    printf("File wird eingelesen...\n");
    if (freopen("inputfile1.txt", "r", stdin) == NULL){
        printf("kann File nicht öffnen\n");
    }
    
    while(getword(word, MAXWORD) != EOF)
        if(isalpha(word[0]))
            root = addtree(root, word);
    treeprint(root);
    return(0);
} 

NodePtr_t addtree(NodePtr_t root, char * word) {
    NodePtr_t node;

    if (root == NULL) {
        return newnode(word);
    }
    //TODO
    printf("treeprint: NOT IMPLEMENTED YET\n");
    return node;   
}

void treeprint(NodePtr_t node) {
    if (node != NULL) {
        treeprint(node->left);
        treeprint(node->right);
        printf("%3d\t%s", node->count, node->word);
    }
}

NodePtr_t newnode(char *word) {
    NodePtr_t node;
    node = (NodePtr_t)malloc(sizeof(Node_t));

    node->word = (char*)malloc(sizeof(char) * strlen(word+1));
    strcpy(node->word, word);
    node->count = 1;
    node->left = NULL;
    node->right = NULL;

    return node;
}

