// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, calculating the volume of the cylinder

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

float VolumeCylinder(float radius, float height) {
    // This function calculates the volume of the triangle
    float volume;

    // process
    volume = M_PI * pow(radius, 2.00) * height;

    // output
    return volume;
}


int main() {
    // This function does try and catch, input and output
    std::string radiusString;
    std::string heightString;
    float radiusFloat;
    float heightFloat;
    float volume;

    std::cout <<
    "This function calculates the volume of the cylinder." << std::endl;
    std::cout << "Please enter the radius and the height." << std::endl;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter the radius of the cylinder (cm): ";
    std::cin >> radiusString;
    std::cout << "Enter the height of the cylinder (cm): ";
    std::cin >> heightString;

    // process
    std::cout << "" << std::endl;
    try {
        radiusFloat = std::stof(radiusString);
        heightFloat = std::stof(heightString);
        volume = VolumeCylinder(radiusFloat, heightFloat);
        std::cout << "The volume of this cylinder with the radius of "
        << radiusFloat << " cm and the height of " << heightFloat
        << " cm is " << std::fixed << std::setprecision(2) << std::setfill('0')
        << volume << " cm²." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
