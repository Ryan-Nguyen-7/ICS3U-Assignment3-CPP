// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program calculates an emloyee's bonus


#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // this function calculates an emloyee's bonus

    const float BONUS_PERCENTAGE = 0.05;
    const float REQUIREMENT = 5;

    int currentSalary;
    int yearsOfService;
    float bonus;
    float salaryWithBonus;

    // input
    std::cout << "Enter your current salary: ";
    std::cin >> currentSalary;

    std::cout << "Enter your number of years of service: ";
    std::cin >> yearsOfService;

    // process
    bonus = currentSalary * BONUS_PERCENTAGE;

    salaryWithBonus = currentSalary + bonus;

    // output
    std::cout << "" << std::endl;
    if (yearsOfService >= REQUIREMENT) {
        std::cout << "Your bonus is $"
                  << std::fixed << std::setprecision(2) << std::setfill('0')
                  << bonus << std::endl;

        std::cout << "Your new salary, including bonus is $"
                  << std::fixed << std::setprecision(2) << std::setfill('0')
                  << salaryWithBonus << std::endl;
    } else if (yearsOfService <= REQUIREMENT) {
        std::cout << "You need more than 5 years of service to gain a bonus :(";
    } else {
        std::cout << "No clue";
    }
}
