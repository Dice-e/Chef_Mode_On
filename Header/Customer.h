#pragma once
#define "Customer.h"

#include <vector>
#include <string>
#include "Order.h"

class Customer {
private:
    int customerId;
    int level;
    std::vector<Order> orders;

public:
    
    Customer();
    Customer(int id, int lvl);

    
    void setCustomerId(int id);
    void setLevel(int lvl);
    void setOrders(const std::vector<Order>& newOrders);

   
    int getCustomerId() const;
    int getLevel() const;
    std::vector<Order> getOrders() const;

    
    void addOrder(const Order& order);
    Order pickOrder();
    void displayOrders() const;
};

return 0;
