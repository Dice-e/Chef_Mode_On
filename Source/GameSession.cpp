#include "GameSession.h"
#include "Food.h"
#include <iostream>
#include <cctype>

GameSession::GameSession(const Food& food, int startingPoints)
    : points(startingPoints), currentFood(food)
{
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
}
