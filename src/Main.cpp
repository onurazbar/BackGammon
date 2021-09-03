/*
 *
 * @file Main.cpp
 * @brief This file contains the main function of the backgammon game.
 *
 */

#include "Game.hpp"

#include <iostream>

int main()
{
    std::cout << "BackGammon game!" << std::endl << std::endl;

    auto game = std::make_unique<Game>();

    game->play();

    return 0;
}
