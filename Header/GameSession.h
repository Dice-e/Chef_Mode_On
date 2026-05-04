#pragma once
#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "Order.h"

class GameSession {
public:
    int points;
    Order currentOrder;

    GameSession(Order order);

    void deductPoints();
    bool checkFailure();
    void processOrder();
};

#endif