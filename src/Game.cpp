/*
 *
 * @file  Game.cpp
 * @biref This file contains the implementation of Game class.
 *
 */

#include <memory>

#include "Game.hpp"

Game::Game()
{
}

Game::~Game()
{
}

void Game::play()
{
    board.drawBoard();
}
