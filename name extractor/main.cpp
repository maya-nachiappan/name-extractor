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

    std::cout << "Enter your full name (first and last names): "; // gets full name from user in string
    
    std::getline(std::cin, fullName);

    size_t spacePos = fullName.find(' '); // checks for spaces in string

    if (spacePos != std::string::npos) {
        std::string firstName = fullName.substr(0, spacePos); // extracts name before space
        
        std::string lastName = fullName.substr(spacePos + 1); // extracts name after space

        std::cout << "First Name: " << firstName << std::endl; // prints first name
        std::cout << "Last Name: " << lastName << std::endl; // prints last name
    } else {
        std::cout << "No last name found." << std::endl;
    }

    return 0;
}
