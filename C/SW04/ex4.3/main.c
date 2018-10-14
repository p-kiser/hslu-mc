#include "ampel.h"

int main() {

    state s;
    for (;;) {
        printState();
        nextState();
    }
}