/*
 *
 * @file Human.cpp
 * @brief This file contains the implementation of Human class.
 *
 */

#include "Human.hpp"

#include <iostream>

Human::Human(): Player(blue)
{
}

Human::~Human()
{
}

bool Human::checkSelectionValid(std::vector<std::vector<Disc>>& disc_places, const int& dice, const int& position)
{
    if (std::cin.fail())
    {
        return false;
    }

    if (disc_places[position].empty())
    {
        return false;
    }

    if (disc_places[position][0].getDiscColor() == red)
    {
        return false;
    }

    if (!disc_places[position + dice].empty() &&
        (disc_places[position + dice][0].getDiscColor() == red) &&
        (disc_places[position + dice].size() > 1))
    {
        return false;
    }

    return true;
}

bool Human::checkAndBreakOpponentDisc(std::vector<std::vector<Disc>>& disc_places, const int& position)
{
    if (!disc_places[position].empty() &&
        (disc_places[position][0].getDiscColor() == red) &&
        (disc_places[position].size() == 1))
    {
        disc_places[position].pop_back();
        opponent->setBrokenDiscCount(opponent->getBrokenDiscCount() + 1);

        return true;
    }

    return false;
}

void Human::makeMove(std::vector<std::vector<Disc>>& disc_places, const int& dice)
{
    std::cout << "Please take action according to current dice values." << std::endl;
    std::cout << "Dice is " << dice << std::endl;

    if (broken_disc_count > 0)
    {
        std::cout << "Press any key to get your broken disc back into play." << std::endl;
        std::cin.get();

        if (disc_places[dice - 1].empty() ||
            (disc_places[dice - 1][0].getDiscColor() == blue) ||
            checkAndBreakOpponentDisc(disc_places, (dice - 1)))
        {
            disc_places[dice - 1].push_back(Disc(blue));
            broken_disc_count--;
        }
        else
        {
            std::cout << "Broken disc cannot get back into play with this dice!" << std::endl;
        }
    }
    else
    {
        std::cout << "Select a disc position to move a disc according to dice value." << std::endl;

        int position = 0;
        std::cin >> position;

        while (!checkSelectionValid(disc_places, dice, position))
        {
            std::cin.clear();
            std::cin.ignore(256,'\n');
            std::cout << std::endl << "Invalid selection! Please try again." << std::endl << std::endl;
            std::cin >> position;
        }

        int new_position = position + dice;

        checkAndBreakOpponentDisc(disc_places, new_position);

        disc_places[position].pop_back();
        disc_places[position + dice].push_back(Disc(blue));
    }
}
