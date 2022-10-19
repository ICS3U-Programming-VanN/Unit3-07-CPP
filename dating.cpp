// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: October 19, 2022
// This program asks the user for their age and
// determines whether or not they can date the grandchild


#include <iostream>


int main() {
    // Declared Constants (age threshold)
    const int MINIMUM_AGE_THRESHOLD = 25;
    const int MAXIMUM_AGE_THRESHOLD = 40;

    // Initialize Variables
    std::string userAgeString;
    int userAge;

    // Asks user for their age
    std::cout << "Enter you age: ";
    std::cin >> userAgeString;

    // Checks for exceptions (in user input)
    try {
        // Converts user's age input into an integer
        userAge = std::stoi(userAgeString);

        // IF the user is within the age threshold
        if (
            userAge > MINIMUM_AGE_THRESHOLD
            && userAge < MAXIMUM_AGE_THRESHOLD
            ) {
            std::cout << "You are allowed to date my grandchild!" << std::endl;

        // IF the user is not with the age threshold
        } else {
            std::cout << "You are not allowed to date my grandchild!"
            << std::endl;
        }

    // Handles any exceptions raised
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number for age!" << std::endl;
    }
}
