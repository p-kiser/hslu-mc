/**
 * HSLU.I.HS18.MC
 * Übung 4.3: Ampel 
 * 
 * @author Pascal Kiser
 * @date 10.04.2018
 */


#include "ampel.h"
#include <stdio.h>

static state s = RED;

state getState() {
    return s;
}

void nextState() {
    s == YELLOW ? s = RED : s++;
}

void printState() {
    switch (s) {
        case RED:
            printf("Red\n");
            break;
        case GREEN:
            printf("Green\n");
            break;
        case GREEN_BLINKING:
            printf("Green blinking\n");
            break;
        case YELLOW:
            printf("Yellow\n");
            break;
    }
}