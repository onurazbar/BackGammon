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
protected:

    /**
     * @brief Checks and breaks if there is a single opponent disc on the position.
     * @param disc_places Places of the discs.
     * @param position Position at table to check for broke.
     * @return True If opponent's disc is broken.
     */
    bool checkAndBreakOpponentDisc(std::vector<std::vector<Disc>>& disc_places, const int& position);

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
     * @param dice Current dice after rolling.
     */
    void makeMove(std::vector<std::vector<Disc>>& disc_places, const int& dice);
};

#endif /* COMPUTER_HPP_INCLUDED */
