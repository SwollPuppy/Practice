// StandardIn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "StandardIn.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

void showStringVector(std::vector<std::string>& sList) {
	if (sList.size() > 1) {
		for (size_t i = 0; i < sList.size(); i++) {
			std::cout << sList[i] << "  ";
		}
		std::cout << std::endl;
	}
}

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

	while (ss.good())
	{
		std::string substr;
		std::getline(ss, substr, ',');
		result.push_back(substr);
	}

	showStringVector(result);

	std::cout << "Now you give me a string." << std::endl;
	std::cin >> myList;
	std::stringstream st(myList);

	while (st.good())
	{
		std::string substr;
		std::getline(st, substr, ',');
		meList.push_back(substr);
	}

	showStringVector(meList);

	//void showStringVector(std::vector<std::string>& sList) {
	//	if (sList.size() > 1) {
	//		for (size_t i = 0; i < sList.size(), i++) {
	//			std::cout << sList[i] << "  ";
	//		}
	//		std::cout << std::endl;
	//	}
	//}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
