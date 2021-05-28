// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 28, 2021
// This program displays every RGB colours

#include <iostream>

int main() {
    // declare constant
    int MAX_COLOUR_VALUE = 20;

    // declare variables
    int counterRed, counterGreen, counterBlue;

    for (counterRed = 0; counterRed < MAX_COLOUR_VALUE
     + 1; counterRed++) {
        for (counterGreen = 0; counterGreen < MAX_COLOUR_VALUE
         + 1; counterGreen++) {
            for (counterBlue = 0; counterBlue < MAX_COLOUR_VALUE
             + 1; counterBlue++) {
                std::cout << "RGB (" << counterRed << ", "
                << counterGreen << ", " << counterBlue << ")\n";
            }
        }
    }
}
