/**
 * HSLU.I.HS18.MC
 * Übung 4.3: Ampel 
 * 
 * @author Pascal Kiser
 * @date 10.04.2018
 */

#include "ampel.h"

int main() {

    state s;
    for (;;) {
        printState();
        nextState();
    }
}