/*
 *
 * @file Computer.hpp
 * @brief This file defines Computer class.
 *
 */

#ifndef COMPUTER_HPP_INCLUDED
#define COMPUTER_HPP_INCLUDED

#include "Player.hpp"

class Computer: public Player
{
public:

    /**
     * @brief Default constructor.
     */
    Computer();

    /**
     * @brief Destructor
     */
    ~Computer();

    /**
     * @brief Makes the corresponding disc move according to the dieces.
     * @param disc_places Places of the discs that move on.
     */
    void makeMove(std::vector<std::vector<Disc>>& disc_places);
};

#endif /* COMPUTER_HPP_INCLUDED */
