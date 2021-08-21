/*
 *
 * @file  Game.hpp
 * @brief This file defines Game class.
 *
 */

#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <vector>

#include "Board.hpp"
#include "Computer.hpp"
#include "Human.hpp"

class Game
{
private:

    /**
     * @brief Board of the game.
     */
    std::unique_ptr<Board> board;

    /**
     * @brief Player that is controlled by computer.
     */
    std::unique_ptr<Computer> computer;

    /**
     * @brief Player that is controlled by human.
     */
    std::unique_ptr<Human> human;

    /**
     * @brief 2-D vector for disc places.
     */
    std::vector<std::vector<Disc>> disc_places;

    /**
     * @brief Dices of the game. Their range is [1,6].
     */
    int dices[2];

    /**
     * @brief Initializes disc positions before starting the game.
     */
    void initializeDiscPositions();

    /**
     * @brief Updates game view on screen;
     */
    void updateView();

public:

    /**
     * Default constrcutor.
     */
    Game();

    /**
     * Destructor.
     */
    ~Game();

    /**
     * Starts the gameplay.
     */
    void play();
};

#endif /* GAME_HPP_INCLUDED */
