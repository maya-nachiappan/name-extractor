//
//  main.cpp
//  name extractor
//
//  Created by maya nachiappan on 10/23/24.
//
#include <iostream>
#include <string>
#include "getName.hpp"

int main() {
    std::string fullName;
    std::string firstName;
    std::string lastName;

    std::cout << "Enter your full name (first and last names): ";
    std::getline(std::cin, fullName);

    getName(fullName, firstName, lastName);

    if (!firstName.empty() && !lastName.empty()) {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
    } else {
        std::cout << "No last name found." << std::endl;
    }

    return 0;
}
