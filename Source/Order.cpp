#include "Order.h"
#include <iostream>

Order::Order(int id, const Customer& cust, const Food& f, int lvl, int parentId)
    : orderId(id), customer(cust), food(new Food(f)), level(lvl), parentOrderId(parentId), isCompleted(false)
{
}

Order::~Order() {
    if (food != nullptr) {
        delete food;
    }
    for (auto child : childOrders) {
        delete child;
    }
    childOrders.clear();
}

int Order::getOrderId() const {
    return orderId;
}

Customer Order::getCustomer() const {
    return customer;
}

Food* Order::getFood() const {
    return food;
}

int Order::getLevel() const {
    return level;
}

int Order::getParentOrderId() const {
    return parentOrderId;
}

std::vector<Order*> Order::getChildOrders() const {
    return childOrders;
}

bool Order::getIsCompleted() const {
    return isCompleted;
}

void Order::setCompleted(bool completed) {
    isCompleted = completed;
}

void Order::addChildOrder(Order* childOrder) {
    if (childOrder != nullptr) {
        childOrders.push_back(childOrder);
    }
}

void Order::displayOrder() const {
    std::cout << "Order #" << orderId << " - " << food->getFoodName();
    if (isCompleted) {
        std::cout << " [Completed]";
    }
    std::cout << std::endl;
}

void Order::displayHierarchy(int indent) const {
    std::string padding(indent * 2, ' ');
    std::cout << padding << "-> ";
    displayOrder();

    for (const auto& child : childOrders) {
        if (child != nullptr) {
            child->displayHierarchy(indent + 1);
        }
    }
}
