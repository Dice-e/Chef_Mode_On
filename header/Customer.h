#pragma once

#include <vector>
#include <string>
#include "Food.h"

class Customer {
private:
	int customerId;
	int level;
	std::vector<Food> food;

public:
	Customer();
	Customer(int id, int lvl);

	void setCustomerId(int id);
	void setLevel(int lvl);
	void setfood(const std::vector<Food>& newfood);
	void push_back(const Food& singlefood);

	int getCustomerId() const;
	int getLevel() const;
	std::vector<Food> getfood() const;

	void displayfood() const;
};


