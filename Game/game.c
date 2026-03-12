#include "game.h"
#include <string.h>

const char* playGame(const char* player1Shape, const char* player2Shape)
{
    if (strcmp(player1Shape, STR_ROCK) != 0
        && strcmp(player1Shape, STR_PAPER) != 0
        && strcmp(player1Shape, STR_SISSOR) != 0) {
        return STR_INVALID;

    }
    if (strcmp(player2Shape, STR_ROCK) != 0 
        && strcmp(player2Shape, STR_PAPER) != 0 
        &&  strcmp(player2Shape, STR_SISSOR) != 0) {
        return STR_INVALID;
    }

    if (strcmp(player1Shape, player2Shape) == 0) {
        return STR_DRAW;
    }
    if ((strcmp(player1Shape, STR_SISSOR) == 0 && strcmp(player2Shape, STR_PAPER) == 0) ||
        (strcmp(player1Shape, STR_ROCK) == 0 && strcmp(player2Shape, STR_SISSOR) == 0) ||
        (strcmp(player1Shape, STR_PAPER) == 0 && strcmp(player2Shape, STR_ROCK) == 0)) {
        return STR_PLAYER1;
    }
    
}