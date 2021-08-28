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
private:

    /**
     * @brief Checks whether the selection is valid or not.
     * @param disc_places Places of the discs that move on.
     * @param dice Current dice after rolling.
     * @return Whether the selection is valid or not.
     */
    bool checkSelectionValid(std::vector<std::vector<Disc>>& disc_places, const int& dice, const int& position);

protected:

    /**
     * @brief Checks and breaks if there is a single opponent disc on the position.
     * @param disc_places Places of the discs that move on.
     * @param position Position at table to check for broke.
     * @return True If opponent's disc is broken.
     */
    bool checkAndBreakOpponentDisc(std::vector<std::vector<Disc>>& disc_places, const int& position);

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
     * @param dice Current dice after rolling.
     */
    void makeMove(std::vector<std::vector<Disc>>& disc_places, const int& dice);
};

#endif /* HUMAN_HPP_INCLUDED */
