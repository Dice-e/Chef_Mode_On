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
    std::string foodName;
    std::vector<std::string> questions;
    std::vector<std::vector<std::string>> choices;
    std::vector<char> answers;

public:
    Food(std::string name);

    void addStep(std::string question,
        std::vector<std::string> option,
        char answer);

    bool playFood(int& score);

    std::string getFoodName();
};

#endif