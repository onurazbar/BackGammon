/*
 *
 * @file  Game.cpp
 * @biref This file contains the implementation of Game class.
 *
 */

#include "Game.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game() : game_finished(false)
{
    board = std::make_unique<Board>();
    computer = std::make_shared<Computer>();
    human = std::make_shared<Human>();

    computer->setOpponent(human);
    human->setOpponent(computer);

    initializeDiscPositions();

    std::srand(std::time(0));
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
    board->clearBoard();

    for (unsigned int i = 0; i < disc_places.size(); i++)
    {
        for (unsigned j = 0; j < disc_places[i].size(); j++)
        {
            board->placeDisc(i, j, disc_places[i][j]);
        }
    }

    board->drawBoard();
}

void Game::rollDices()
{
    for (unsigned int i = 0; i < dices.size(); i++)
    {
        dices[i] = (std::rand() % 6) + 1;

        std::cout << "dices[" << i << "]: " << dices[i] << std::endl;
    }

    std::cout << std::endl;
}

void Game::play()
{
    std::cout << "Welcome console based backgammon game!" << std::endl;
    std::cout << "Press any key to start the game!" << std::endl;
    std::cin.get();

    updateView();

    std::cout << "Blue discs that are display with B are yours, red discs belongs to computer." << std::endl;
    std::cout << "Game will start with your round." << std::endl;

    while (!game_finished)
    {
        std::cout << "Your turn, press any key to roll the dices." << std::endl;
        std::cin.get();

        rollDices();

        for (auto i : dices)
        {
            human->makeMove(disc_places, i);
            updateView();

            if (computer->getBrokenDiscCount())
            {
                std::cout << "Broken discs of the computer: ";

                for (int i = 0; i < computer->getBrokenDiscCount(); i++)
                {
                    std::cout << red_disc_symbol << " ";
                }

                std::cout << std::endl;
            }
        }

        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Computer's turn, press any key to let computer to roll the dices." << std::endl;
        std::cin.get();

        rollDices();

        for (auto i : dices)
        {
            computer->makeMove(disc_places, i);
            updateView();

            if (human->getBrokenDiscCount())
            {
                std::cout << "Broken discs of the computer: ";

                for (int i = 0; i < human->getBrokenDiscCount(); i++)
                {
                    std::cout << blue_disc_symbol << " ";
                }

                std::cout << std::endl;
            }
        }
    }
}
