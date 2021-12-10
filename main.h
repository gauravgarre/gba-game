#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

typedef struct {
    int x;
    int y;
    int w;
    int h;
    int state;
} Player;

typedef struct {
    int x;
    int y;
    int w;
    int h;
    int speed;
    int state;
} Enemy;

typedef struct {
    int x;
    int y;
    int w;
    int h;
    int state;
} Coin;

typedef struct {
    int x;
    int y;
    int w;
    int h;
} Goal;

#endif
