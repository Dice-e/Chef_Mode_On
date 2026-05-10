#include "GameSession.h"
#include "Food.h"

void GameSession::processFood() {
    std::cout << "\n--- KITCHEN START: " << currentFood.getFoodName() << " ---" << std::endl;

    for (int i = 0; i < currentFood.questions.size(); i++) {
        bool stepCorrect = false;

        while (!stepCorrect) {
            std::cout << "\nTASK: " << currentFood.questions[i] << std::endl;

            // Display A, B, C, D choices
            char letters[] = { 'A', 'B', 'C', 'D' };
            for (int j = 0; j < currentFood.choices[i].size(); j++) {
                std::cout << letters[j] << ". " << currentFood.choices[i][j] << std::endl;
            }

            char input;
            std::cout << "Chef's Action: ";
            std::cin >> input;
            input = toupper(input);

            if (input == currentFood.answers[i]) {
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
