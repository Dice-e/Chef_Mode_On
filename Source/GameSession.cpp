#include "GameSession.h"
#include "Food.h"
#include <iostream>
#include <cctype>

GameSession::GameSession(const Food& food, int startingPoints)
    : points(startingPoints), currentFood(food), rootOrder(nullptr)
{
}

GameSession::GameSession(Order* order, int startingPoints)
    : points(startingPoints), rootOrder(order), currentFood("")
{
    if (order != nullptr && order->getFood() != nullptr) {
        currentFood = *order->getFood();
    }
}

GameSession::~GameSession() {
    // rootOrder is managed by the caller, not by GameSession
}

int GameSession::getPoints() const {
    return points;
}

void GameSession::deductPoints(int amount) {
    points -= amount;
    if (points < 0) points = 0;
}

bool GameSession::checkFailure() const {
    return points <= 0;
}

void GameSession::processFood() {
    std::cout << "\n--- KITCHEN START: " << currentFood.getFoodName() << " ---" << std::endl;

    if (currentFood.questions.size() != currentFood.answers.size()) {
        std::cout << "ERROR: Questions and answers mismatch!\n";
        return;
    }

    for (size_t i = 0; i < currentFood.questions.size(); i++) {
        bool stepCorrect = false;

        while (!stepCorrect) {
            std::cout << "\nTASK: " << currentFood.questions[i] << std::endl;

            // Display A, B, C, D choices
            const char letters[] = { 'A', 'B', 'C', 'D' };
            for (size_t j = 0; j < currentFood.choices[i].size() && j < (sizeof(letters) / sizeof(letters[0])); j++) {
                std::cout << letters[j] << ". " << currentFood.choices[i][j] << std::endl;
            }

            char input;
            std::cout << "Chef's Action: ";
            std::cin >> input;
            input = static_cast<char>(std::toupper(static_cast<unsigned char>(input)));

            if (input != 'A' && input != 'B' && input != 'C' && input != 'D') {
                std::cout << "Invalid input \n";
            }
            else if (input == currentFood.answers[i]) {
                std::cout << ">> Correct! Moving on..." << std::endl;
                stepCorrect = true;
            }
            else {
                deductPoints();
                std::cout << ">> WRONG! Points: " << points << std::endl;
                if (checkFailure()) {
                    std::cout << ">> YOU FAILED THE DISH!" << std::endl;
                    return;
                }
            }
        }
    }
    std::cout << "\nSUCCESS: Dish completed!" << std::endl;
    currentFood.isCompleted = true;
    std::cout << "\nOrder Complete!\n";

}

void GameSession::processHierarchicalOrder() {
     if (rootOrder == nullptr) {
         return;
     }

     processOrderRecursively(rootOrder);
}

void GameSession::processOrderRecursively(Order* order) {
     if (order == nullptr) {
         return;
     }

     // Set the current food to this order's food
     if (order->getFood() != nullptr) {
         currentFood = *order->getFood();
     }

     processFood();

     // Process all child orders
     for (Order* childOrder : order->getChildOrders()) {
         processOrderRecursively(childOrder);
     }
}

Order* GameSession::getRootOrder() const {
    return rootOrder;
}

