#include "GameSession.h"
#include <iostream>

using namespace std;

GameSession::GameSession(Order order) : currentOrder(order) {
    points = 100;
}

void GameSession::deductPoints() {
    points -= 10;
};

bool GameSession::checkFailure() {
    return points < 30;
}

void GameSession::processOrder() {
    cout << "\nOrder: " << currentOrder.foodType << endl;

    for (int i = 0; i < currentOrder.steps.size(); i++) {
        bool correct = false;

        while (!correct) {
            Step& step = currentOrder.steps[i];

            cout << "\nStep " << step.stepNumber << ": " << step.question << endl;

            for (int j = 0; j < step.choices.size(); j++) {
                cout << j << ". " << step.choices[j].text << endl;
            }

            int answer;
            cout << "Enter answer: ";
            cin >> answer;

            if (step.checkAnswer(answer)) {
                cout << "Correct!\n";
                correct = true;
            }
            else {
                deductPoints();
                cout << "Wrong! Points: " << points << endl;

                if (checkFailure()) {
                    cout << "Level Failed!\n";
                    return;
                }
            }
        }
    }

    currentOrder.isCompleted = true;
    cout << "\nOrder Complete!\n";
};