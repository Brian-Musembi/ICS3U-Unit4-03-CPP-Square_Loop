// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program calculates the square of all positive integers
//      between 0 and a user input

#include <iostream>
#include <string>

#include <cmath>

int main() {
    // This program calculates the square of all positive integers
    //      between 0 and a user input

    std::cout << "This program calculates the square of all "
                 " positive integers between 0 and whatever positive integer "
                 "the user inputs." << std::endl;

    // variable declarations
    int loopCounter;
    int square = 0;
    std::string userInput;
    int userInputInt;

    // input
    std::cout << "Input a positive integer: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    try {
        userInputInt = std::stoi(userInput);

        if (userInputInt >= 0) {
            for (loopCounter = 0; loopCounter <= userInputInt; loopCounter++) {
                square = pow(loopCounter, 2);
                std::cout << loopCounter << "² = " << square << std::endl;
            }
        } else {
            // output
            std::cout << userInputInt << " is not a positive integer!"
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thank you for playing!" << std::endl;
}
