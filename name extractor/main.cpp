//
//  main.cpp
//  name extractor
//
//  Created by maya nachiappan on 10/23/24.
//
#include <iostream>
#include <string>

int main() {
    std::string fullName;

    std::cout << "Enter your full name (first and last): ";
    std::getline(std::cin, fullName);

    size_t spacePos = fullName.find(' ');

    if (spacePos != std::string::npos) {
        std::string firstName = fullName.substr(0, spacePos);
        
        std::string lastName = fullName.substr(spacePos + 1);

        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
    } else {
        std::cout << "No last name found! Please enter both first and last names." << std::endl;
    }

    return 0;
}
