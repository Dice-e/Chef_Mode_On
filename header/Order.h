#pragma once
#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <string>
#include "Food.h"
#include "Customer.h"

class Order {
private:
    int orderId;
    Customer customer;
    Food* food;
    int level;
    int parentOrderId;
    std::vector<Order*> childOrders;
    bool isCompleted;

public:
    Order(int id, const Customer& cust, const Food& f, int lvl, int parentId = -1);
    ~Order();

    // Getters
    int getOrderId() const;
    Customer getCustomer() const;
    Food* getFood() const;
    int getLevel() const;
    int getParentOrderId() const;
    std::vector<Order*> getChildOrders() const;
    bool getIsCompleted() const;

    // Setters
    void setCompleted(bool completed);
    void addChildOrder(Order* childOrder);

    // Display
    void displayOrder() const;
    void displayHierarchy(int indent = 0) const;
};

#endif
