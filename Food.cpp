#include "Food.h"
#include <random>
#include <algorithm>


Food::Food(std::string name) {
    foodName = name;
	isCompleted = false;
}

bool isCompleted = false;

bool Food::Step::checkAnswer(int answer) {
    return answer == 0; 
}

void Food::addStep(std::string question,
    std::vector<std::string> option,
    char answer) {

    questions.push_back(question);
    choices.push_back(option);
    answers.push_back(answer);
}



std::string Food::getFoodName () const {
    return foodName;
}

bool Food::playFood(int& score) {

    std::cout << "\nCooking: " << foodName << "\n";

    for (int i = 0; i < questions.size(); i++) {

        bool correct = false;

        while (!correct) {

            std::vector<std::string> tempChoices = choices[i];

			std::random_device rd;
			std::mt19937 g(rd());

            std::shuffle(tempChoices.begin(), tempChoices.end(),g);

            std::cout << "\n" << questions[i] << "\n";

            char letters[4] = { 'A', 'B', 'C', 'D' };

            int correctIndex = 0;

            for (int j = 0; j < tempChoices.size(); j++) {
                std::cout << letters[j] << ". "
                    << tempChoices[j] << "\n";

                if (tempChoices[j] == choices[i][0]) {
                    correctIndex = j;
                }
            }

            char userAnswer;
            std::cout << "Answer: ";
            std::cin >> userAnswer;

            userAnswer = toupper(userAnswer);

            if (userAnswer == letters[correctIndex]) {
                std::cout << "Correct!\n";
                correct = true;
            }
            else {
                score -= 10;

                std::cout << "Wrong! -10 points\n";
                std::cout << "Score: " << score << "\n";

                if (score <= 0) {
                    std::cout << "GAME OVER!\n";
                    return false;
                }
            }
        }
    }

    std::cout << "\n" << foodName
        << " completed successfully!\n";

    return true;
}