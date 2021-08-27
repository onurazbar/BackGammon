/*
 *
 * @file Human.hpp
 * @brief This file defines Human class.
 *
 */

#ifndef HUMAN_HPP_INCLUDED
#define HUMAN_HPP_INCLUDED

#include "Player.hpp"

class Human: public Player
{
public:

    /**
     * @brief Default constructor.
     */
    Human();

    /**
     * @brief Destructor
     */
    ~Human();

    /**
     * @brief Makes the corresponding disc move according to the dieces.
     * @param disc_places Places of the discs that move on.
     * @param dices Current dices after rolling.
     */
    void makeMove(std::vector<std::vector<Disc>>& disc_places, const std::array<int, 2>& dices);
};

#endif /* HUMAN_HPP_INCLUDED */
