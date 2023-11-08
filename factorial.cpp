// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: November 5, 2023
// This program shows the factorial of all the numbers from 0 to the user num

#include <cstdlib>
#include <iostream>

int main() {
    // declare variables
    std::string userNumString;
    int userNumInt, counter, factorial;

    // initialize the counter and factorial to 1
    counter = 1;
    factorial = 1;

    // get the user number
    std::cout << "This program shows the factorial of ";
    std::cout << "the numbers from 0 to the user's integer";
    std::cout << "\nEnter an integer: ";
    std::cin >> userNumString;

    try {
        // convert  the user number to an integer
        userNumInt = std::stoi(userNumString);

        // if the user number < 0, tell the user to enter a positive integer
        if (userNumInt <= 0) {
            std::cout << userNumInt << " is not a positive integer\n";
        } else {
            // otherwise while the counter <= the user number
            do {
                // display the tracking of the loop
                std::cout << "Tracking " << counter << " times through loop\n";

                // add the counter to the factorial
                factorial = factorial * counter;

                // increment the counter
                counter = counter + 1;
            } while (counter <= userNumInt);
            // display the factorial of the numbers from 0 to the user num
            std::cout << userNumString << "! = " << factorial << "\n";
        }
    } catch (std::invalid_argument) {
        // if the number is not an int, then tell them their input is invalid
        std ::cout << userNumString << " is not a valid integer.\n";
    }
}
