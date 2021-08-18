/*
 *
 * @file  Game.hpp
 * @brief This file defines Game class.
 *
 */

#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include "Board.hpp"

class Game
{
private:

    /**
     * @brief Board of the game.
     */
    Board board;

    /**
     * Dices of the game. Their range is [1,6].
     */
    int dices[2];

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
