// StandardIn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "StandardIn.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
	std::string name;
	std::string myList;
	std::vector<std::string> result;
	std::vector<std::string> meList;

	std::stringstream ss("3,13,9,4,7");

    std::cout << "Hello World!\n";
	std::cout << "Who are you?" << std::endl;
	std::cin >> name;
	std::cout << "Hello " << name << std::endl;

	result = parseStringVector(ss);
	showStringVector(result);

	std::cout << "Now you give me a string." << std::endl;
	std::cin >> myList;
	std::stringstream st(myList);


	meList = parseStringVector(st);
	showStringVector(meList);

	return 0;
}

void showStringVector(std::vector<std::string>& sList) {
	if (sList.size() > 1) {
		for (size_t i = 0; i < sList.size(); i++) {
			std::cout << sList[i] << std::endl;
		}
		//std::cout << std::endl;
	}
}

std::vector<std::string> parseStringVector(std::stringstream& steam) {
	std::string pstring;
	std::vector<std::string> pvector;

	while (steam.good()) {
		std::getline(steam, pstring, ',');
		pvector.push_back(pstring);
	}

	return pvector;
}