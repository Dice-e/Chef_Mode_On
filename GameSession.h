#pragma once
#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Food.h"


class GameSession {
private:
    int points;
    Food currentFood;

public:
    GameSession(Food food);

    void deductPoints();
    bool checkFailure();
    void processFood();
};

#endif