#pragma once
#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Food.h"

class GameSession {
private:
    int points;
    Food currentFood;

public:
    explicit GameSession(const Food& food, int startingPoints = 100);

    void deductPoints(int amount = 10);
    bool checkFailure() const;
    void processFood();
};

#endif