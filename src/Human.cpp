/*
 *
 * @file Human.cpp
 * @brief This file contains the implementation of Human class.
 *
 */

#include <iostream>

#include "Human.hpp"

Human::Human(): Player(blue)
{
}

Human::~Human()
{
}

void Human::makeMove(std::vector<std::vector<Disc>>& disc_places, const std::array<int, 2>& dices)
{
    std::cout << "Please take action according to current dice values." << std::endl;
    std::cout << "First dice is " << dices[0] << std::endl;
    std::cout << "Select a disc position to move a disc according to first dice value." << std::endl;

    int position;
    std::cin >> position;

    while (std::cin.fail() ||
           disc_places[position].empty() ||
           (disc_places[position][0].getDiscColor() == red))
    {
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << std::endl << "Invalid selection! Please try again" << std::endl << std::endl;
        std::cin >> position;
    }

    disc_places[position].pop_back();
    disc_places[position + dices[0]].push_back(Disc(blue));
}
