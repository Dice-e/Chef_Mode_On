#include "GameSession.h"
#include "Food.h"
#include <iostream>



GameSession::GameSession(Food food) : currentFood(food) {
    points = 100;
}

void GameSession::deductPoints() {
    points -= 10;
};

bool GameSession::checkFailure() {
    return points < 30;
};

void GameSession::processFood() {
    std::cout << "\nOrder: " << currentFood.getFoodName()<< std::endl;

    for (int i = 0; i < currentFood.steps.size(); i++) {
        bool correct = false;

        while (!correct) {
            Food::Step& step = currentFood.steps[i];

            std::cout << "\nStep " << step.stepNumber << ": " << step.question << std::endl;

            for (int j = 0; j < step.choices.size(); j++) {
                std::cout << j << ". " << step.choices[j]<< std::endl;
            }

            int answer;
            std::cout << "Enter answer: ";
            std::cin >> answer;

            if (step.checkAnswer(answer)) {
                std::cout << "Correct!\n";
                correct = true;
            }
            else {
                deductPoints();
                std::cout << "Wrong! Points: " << points << std::endl;

                if (checkFailure()) {
                    std::cout << "Level Failed!\n";
                    return;
                }
            }
        }
    }

    currentFood.isCompleted = true;
    std::cout << "\nOrder Complete!\n";
};