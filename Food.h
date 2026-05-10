#ifndef Food_h
#define Food_h

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Food {
protected:
    

public:
    std::string foodName;
    std::vector<std::string> questions;
    std::vector<std::vector<std::string>> choices;
    std::vector<char> answers;

    Food(std::string name);
	void addStep(std::string q, std::vector<std::string> c, char a);
	std::string getFoodName() const;
   

    struct Step { 
        int stepNumber;
        std::string question;
        std::vector<std::string> choices;
        bool checkAnswer(int answer);
    };

    bool isCompleted; 
    std::vector<Step> steps;

    void addStep(std::string question,
        std::vector<std::string> option,
        char answer);
	

    bool playFood(int& score);

    std::string getFoodName() const;
};

#endif