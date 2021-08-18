/*
 *
 * @file Main.cpp
 * @brief This file contains the main function of the backgammon game.
 *
 */

#include <iostream>
#include <memory>

#include "Game.hpp"

int main()
{
    std::cout << "BackGammon game" << std::endl;

    std::unique_ptr<Game> game(new Game());

    game->play();

    return 0;
}
