// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program determines whether user can date a grandma's grandchild
//    based off an inputted age

#include <iostream>
#include <string>

int main() {
    // this functions determines

    // constants
    const int maxAge = 40;
    const int minAge = 25;

    // variables
    std::string ageAsString;
    int age;

    // input
    std::cout << "How old are you? ";
    std::cin >> ageAsString;

    // process & output
    try {
        age = std::stoi(ageAsString);
        if (age > minAge && age < maxAge) {
            std::cout << "\nYou can date my grandchild!" << std::endl;
        } else if (age <= minAge) {
            std::cout << "\nYou're too young!" << std::endl;
        } else if (age >= maxAge) {
            std::cout << "\nYou're too old!" << std::endl;
        } else {
            std::cout << "\nI don't know!" << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << "\nTell me your real age!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
