/**
 * HSLU.I.HS18.MC
 * Übung 4.3: Ampel 
 * 
 * @author Pascal Kiser
 * @date 10.04.2018
 */

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