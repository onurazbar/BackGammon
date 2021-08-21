/*
 *
 * @file  Game.cpp
 * @biref This file contains the implementation of Game class.
 *
 */

#include <iostream>
#include <memory>

#include "Game.hpp"

Game::Game()
{
    board.reset(new Board());
    computer.reset(new Computer());
    human.reset(new Human());

    initializeDiscPositions();
}

Game::~Game()
{
}

void Game::initializeDiscPositions()
{
    std::vector<Disc> v;

    for (int i = 0; i < 2; i++)
    {
        v.push_back(Disc(blue));
    }

    disc_places.push_back(v);

    v.clear();

    for (int i = 0; i < 4; i++)
    {
        disc_places.push_back(v);
    }

    for (int i = 0; i < 5; i++)
    {
        v.push_back(Disc(red));
    }

    disc_places.push_back(v);

    v.clear();

    disc_places.push_back(v);

    for (int i = 0; i < 3; i++)
    {
        v.push_back(Disc(red));
    }

    disc_places.push_back(v);

    v.clear();

    for (int i = 0; i < 3; i++)
    {
        disc_places.push_back(v);
    }

    for (int i = 0; i < 5; i++)
    {
        v.push_back(Disc(blue));
    }

    disc_places.push_back(v);

    v.clear();

    for (int i = 0; i < 5; i++)
    {
        v.push_back(Disc(red));
    }

    disc_places.push_back(v);

    v.clear();

    for (int i = 0; i < 3; i++)
    {
        disc_places.push_back(v);
    }

    for (int i = 0; i < 3; i++)
    {
        v.push_back(Disc(blue));
    }

    disc_places.push_back(v);

    v.clear();

    disc_places.push_back(v);

    for (int i = 0; i < 5; i++)
    {
        v.push_back(Disc(blue));
    }

    disc_places.push_back(v);

    v.clear();

    for (int i = 0; i < 4; i++)
    {
        disc_places.push_back(v);
    }

    for (int i = 0; i < 2; i++)
    {
        v.push_back(Disc(red));
    }

    disc_places.push_back(v);
}

void Game::updateView()
{
    for (unsigned int i = 0; i < disc_places.size(); i++)
    {
        for (unsigned j = 0; j < disc_places[i].size(); j++)
        {
            board->placeDisc(i, j, disc_places[i][j]);
        }
    }

    board->drawBoard();
}

void Game::play()
{
    updateView();
}
