/*
 *
 * @file Computer.cpp
 * @brief This file contains the implementation of Computer class.
 *
 */

#include <iostream>

#include "Computer.hpp"

Computer::Computer(): Player(red)
{
}

Computer::~Computer()
{
}

void Computer::makeMove(std::vector<std::vector<Disc>>& disc_places, const int& dice)
{
    std::cout << "Dice is " << dice << std::endl;
    std::cout << "Press any key to let the computer makes its move according to dice value." << std::endl;
    std::cin.get();

    std::cout << "disc_places.size(): " << disc_places.size() << std::endl;
    std::cout << "disc_places[0].size(): " << disc_places[0].size() << std::endl;
    std::cout << "disc_places[1].size(): " << disc_places[1].size() << std::endl;

    for (int i = disc_places.size() - 1; i >= 0; i--)
    {
        if (!disc_places[i].empty() && (disc_places[i][0].getDiscColor() == red))
        {
            if (disc_places[i - dice].empty() ||
                (!disc_places[i - dice].empty() &&
                 (disc_places[i - dice][0].getDiscColor() == red)))
            {
                disc_places[i].pop_back();
                disc_places[i - dice].push_back(Disc(red));
                break;
            }
        }
    }
}
