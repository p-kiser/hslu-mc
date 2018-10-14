#ifndef AMPEL_H
#define AMPEL_H

typedef enum {
    RED,
    GREEN,
    GREEN_BLINKING,
    YELLOW
} state;

state getState();
void nextState();
void printState();

#endif