/**
 * HSLU HS18 MC
 * Übung 0: Hello World 
 * 
 * Beispielprogramm
 * 
 * @author Pascal Kiser
 * @date 25.06.2018
 * @version 1.0
 */
#include <stdio.h>
/**
 * Gibt "Hello World" aus
 */
#define HELLO_WORLD "Hello World!\n"

/**
 * prints "Hello World!"
 */
void sayHello();

/**
 * main function
 */
int main (int argc, char **argv) {
    sayHello();
    return 0;
}

void sayHello() {
    printf(HELLO_WORLD);
}