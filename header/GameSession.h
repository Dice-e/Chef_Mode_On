#pragma once
#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Food.h"
#include "Order.h"

class GameSession {
private:
    int points;
    Food currentFood;
    Order* rootOrder;

public:
    explicit GameSession(const Food& food, int startingPoints = 100);
    explicit GameSession(Order* order, int startingPoints = 100);
    ~GameSession();

    void deductPoints(int amount = 10);
     bool checkFailure() const;
     void processFood();
     void processHierarchicalOrder();
     void processOrderRecursively(Order* order);
     Order* getRootOrder() const;
     int getPoints() const;
};

#endif