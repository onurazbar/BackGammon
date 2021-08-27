/*
 *
 * @file  Game.hpp
 * @brief This file defines Game class.
 *
 */

#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <array>
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
     * @brief Indicates that whether game is finished or not.
     */
    bool game_finished;

    /**
     * @brief Dices of the game. Their range is [1,6].
     */
    std::array<int, 2> dices;

    /**
     * @brief Initializes disc positions before starting the game.
     */
    void initializeDiscPositions();

    /**
     * @brief Updates game view on screen;
     */
    void updateView();

    /**
     * @brief Rolls the dices.
     */
    void rollDices();

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
