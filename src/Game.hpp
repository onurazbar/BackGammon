/*
 *
 * @file  Game.hpp
 * @brief This file defines Game class.
 *
 */

#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include "Board.hpp"
#include "Player.hpp"

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
    std::unique_ptr<Player> computer;

    /**
     * @brief Player that is controlled by human.
     */
    std::unique_ptr<Player> human;

    /**
     * Dices of the game. Their range is [1,6].
     */
    int dices[2];

    /**
     * @brief Place the discs on the board.
     */
    void placeDiscs();

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
