
#include "Customer.h"
#include "Food.h"
#include <iostream>
#include <vector>

Customer::Customer() {
    customerId = 0;
    level = 1;
    food.clear();
}

Customer::Customer(int id, int lvl) {
    customerId = id;
    level = lvl;
    food.clear();
}

void Customer::setCustomerId(int id) {
    customerId = id;
}

void Customer::setLevel(int lvl) {
    level = lvl;
}

void Customer::setfood(const std::vector<Food>& newfood) {
    food = newfood;
}

int Customer::getCustomerId() const {
    return customerId;
}

int Customer::getLevel() const {
    return level;
}

std::vector<Food> Customer::getfood() const {
    return food;
}

void Customer::push_back(const Food& singlefood) {
    food.push_back(singlefood);
}

void Customer::displayfood() const {
    std::cout << "Customer Orders:" << std::endl;
    for (size_t i = 0; i < food.size(); ++i) {
        std::cout << i + 1 << ". " << food[i].getFoodName() << std::endl;
    }
}
