//
//  getName.cpp
//  
//
//  Created by maya nachiappan on 11/2/24.
//

#include "getName.hpp"
#include <iostream>
#include <string>

void getName(const std::string& fullName, std::string& firstName, std::string& lastName) {
    size_t spacePos = fullName.find(' ');

    if (spacePos != std::string::npos) {
        firstName = fullName.substr(0, spacePos);
        lastName = fullName.substr(spacePos + 1); // Extracts name after space
    } else {
        firstName = "";
        lastName = "";
    }
}
