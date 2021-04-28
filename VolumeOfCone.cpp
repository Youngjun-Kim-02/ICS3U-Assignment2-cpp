// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: April 2021
// This program calculates the volume of a cone
//    with radius and height inputted from the user

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the volume of a cone
    
    // variable declarations
    int radiusOfCone;
    int heightOfCone;
    int volumeOfCone;

    // input
    std::cout << "We will be calculating the volume of a cone"
    std::cout << "Enter radius of a cone (mm): ";
    std::cin >> radiusOfCone;
    std::cout << "Enter height of a cone (mm): ";
    std::cin >> heightOfCone;

    // process
    volumeOfCone = 1 / 3 * M_PI * heightOfCone * pow(radiusOfCone, 2);

    // output
    std::cout << "" << std::endl;
    std::cout << "Volume is " << volumeOfCone << " mm³." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
