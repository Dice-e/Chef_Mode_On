
#include "Customer.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

    Customer::Customer() {
        customerId = 0;
        level = 1;
    }

    
    Customer::Customer(int id, int lvl) {
        customerId = id;
        level = lvl;
    }

 
    void Customer::setCustomerId(int id) {
        customerId = id;
    }

    void Customer::setLevel(int lvl) {
        level = lvl;
    }

    void Customer::setOrders(const vector<Order>&newOrders) {
        orders = newOrders;
    }

  
    int Customer::getCustomerId() const {
        return customerId;
    }

    int Customer::getLevel() const {
        return level;
    }

    vector<Order> Customer::getOrders() const {
        return orders;
    }

 
    void Customer::addOrder(const Order & order) {
        orders.push_back(order);
    }

  
    Order Customer::pickOrder() {
        if (orders.empty()) {
            cout << "No orders available." << endl;
            return Order();
        }

        srand(time(0));

        int randomIndex = rand() % orders.size();

        return orders[randomIndex];
    }


    void Customer::displayOrders() const {
        cout << "Customer Orders:" << endl;

        for (size_t i = 0; i < orders.size(); i++) {
            cout << i + 1 << ". "
                << orders[i].getFoodType()
                << endl;
        }
    }
