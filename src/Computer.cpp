/*
 *
 * @file Computer.cpp
 * @brief This file contains the implementation of Computer class.
 *
 */

#include "Computer.hpp"

#include <iostream>

Computer::Computer(): Player(red)
{
}

Computer::~Computer()
{
}

bool Computer::checkAndBreakOpponentDisc(std::vector<std::vector<Disc>>& disc_places, const int& position)
{
    if (!disc_places[position].empty() &&
        (disc_places[position][0].getDiscColor() == blue) &&
        (disc_places[position].size() == 1))
    {
        disc_places[position].pop_back();
        opponent->setBrokenDiscCount(opponent->getBrokenDiscCount() + 1);

        return true;
    }

    return false;
}

void Computer::makeMove(std::vector<std::vector<Disc>>& disc_places, const int& dice)
{
    std::cout << "Dice is " << dice << std::endl;

    if (broken_disc_count > 0)
    {
        std::cout << "Press any key to let computer get its broken disc back into play." << std::endl;
        std::cin.get();

        if (disc_places[24 - dice].empty() ||
            (disc_places[24 - dice][0].getDiscColor() == red) ||
            checkAndBreakOpponentDisc(disc_places, (24 - dice)))
        {
            disc_places[24 - dice].push_back(Disc(red));
            broken_disc_count--;
        }
        else
        {
            std::cout << "Computer cannot get its broken disc back into play with this dice!" << std::endl;
        }
    }
    else
    {
        std::cout << "Press any key to let the computer makes its move according to dice value." << std::endl;
        std::cin.get();

        for (int i = disc_places.size() - 1; i >= 0; i--)
        {
            if (!disc_places[i].empty() && (disc_places[i][0].getDiscColor() == red))
            {
                int position = i - dice;

                if (disc_places[i - dice].empty() ||
                    (!disc_places[i - dice].empty() &&
                     (disc_places[i - dice][0].getDiscColor() == red)) ||
                    checkAndBreakOpponentDisc(disc_places, position))
                {
                    disc_places[i].pop_back();
                    disc_places[i - dice].push_back(Disc(red));
                    break;
                }
            }
        }
    }
}
