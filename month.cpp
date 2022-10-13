// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/13
// Takes user input of an integer between 1-12
// and displays the corresponding month.

#include <iostream>

int main() {
    // Variable for the integer user input
    int integer_month;

    // title
    std::cout << "Months\n";

    // user input for the guessed number + explanation
    std::cout << "Enter your integer (a whole number) from 1 to"
    "12 and get a month: ";
    std::cin >> integer_month;

    // Switch case for the different months
    switch (integer_month) {
        case 1 :
        std::cout << integer_month << " is January\n";
        break;

        case 2 :
        std::cout << integer_month << " is February\n";
        break;

        case 3 :
        std::cout << integer_month << " is March\n";
        break;

        case 4 :
        std::cout << integer_month << " is April\n";
        break;

        case 5 :
        std::cout << integer_month << " is May\n";
        break;

        case 6 :
        std::cout << integer_month << " is June\n";
        break;

        case 7 :
        std::cout << integer_month << " is July\n";
        break;

        case 8 :
        std::cout << integer_month << " is August\n";
        break;

        case 9 :
        std::cout << integer_month << " is September\n";
        break;

        case 10 :
        std::cout << integer_month << " is October\n";
        break;

        case 11 :
        std::cout << integer_month << " is November\n";
        break;

        case 12 :
        std::cout << integer_month << " is December\n";
        break;
        // equivalent of the else statement
        // Used to catch errors/Invalid statements
        default :
        std::cout << "That input is invalid\n";
    }
}
