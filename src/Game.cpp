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
    board.reset(new Board());
    computer.reset(new Player(true));
    human.reset(new Player(false));
}

Game::~Game()
{
}

void Game::placeDiscs()
{

}

void Game::play()
{
    board->drawBoard();
}
