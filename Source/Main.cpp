#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

#include "Customer.h"
#include "GameSession.h"
#include "Burger.h"
#include "Pizza.h"
#include "FriedChicken.h"

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "========================================" << std::endl;
    std::cout << "       WELCOME TO CHEF MODE ON!        " << std::endl;
    std::cout << "========================================\n" << std::endl;

    Burger burger;
    Pizza pizza;
    FriedChicken chicken;

    Customer currentCustomer(101, 1);

    std::vector<Food> menu = { burger, pizza, chicken };
    currentCustomer.setfood(menu);
    Food orderedFood = currentCustomer.pickFood();

    std::cout << "[CUSTOMER]: Hello! I'd like to have the " << orderedFood.getFoodName() << ", please.\n" << std::endl;
    std::cout << "[SYSTEM]: Chef, the order is in! Starting the kitchen...\n" << std::endl;

    // 5. Initialize the Game Session
    GameSession session(orderedFood);

    // 6. START THE PROCESS (This calls the logic in GameSession.cpp)
    session.processFood();

    // 7. Final ending message
    std::cout << "\n========================================" << std::endl;
    std::cout << "   Congrats! Thanks for playing!      " << std::endl;
    std::cout << "========================================" << std::endl;

    std::cout << "\nPress Enter to exit...";
    std::cin.ignore(1000, '\n');
    std::cin.get();

    return 0;
}
