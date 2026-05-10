#pragma once
#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Food.h"


class GameSession {
public:
    int points;
    Food currentFood;

    GameSession(Food food);

    void deductPoints();
    bool checkFailure();
    void processOrder();
};

#endif