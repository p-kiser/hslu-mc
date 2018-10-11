/**
 * HSLU HS18 MC
 * Übung 3.1: Liste mit Namen/Vornamen
 * 
 *
 * @author Pascal Kiser
 * @date 04.10.2018
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