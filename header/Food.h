#ifndef Food_h
#define Food_h

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>

class Food {
public:
	std::string foodName;
	bool isCompleted;
	std::vector<std::string> questions;
	std::vector<std::vector<std::string>> choices;
	std::vector<char> answers;
	std::vector<std::string> answersText;

	Food(std::string name);
	void addStep(const std::string& question,
		const std::vector<std::string>& choices,
		int correctIndex);
	bool playFood(int& score);
	std::string getFoodName() const;
};

#endif