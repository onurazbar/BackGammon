/*
 *
 * @file  Player.hpp
 * @brief This file defines Player class.
 *
 */

#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

#include <array>
#include <vector>

#include "Color.hpp"
#include "Disc.hpp"

class Player
{
protected:

    /**
     * @brief Number of the discs of the player.
     */
    int disc_count;

    /**
     * @brief Color of the player's discs.
     */
    ColorType player_color;

public:

    /**
     * @brief Default constructor.
     */
    Player(const ColorType& color_type);

    /**
     * @brief Destructor
     */
    virtual ~Player();

    /**
     * @brief Returns disc count.
     * @return Number of the discs.
     */
    int getDiscCount();

    /**
     * @brief Sets disc count.
     * @param Number of the discs to be set.
     */
    void setDiscCount(const int& count);

    /**
     * @brief Returns player color.
     * @return Color of the player.
     */
    ColorType getPlayerColor();

    /**
     * @brief Sets player color.
     * @param Color of the player to be set.
     */
    void setPlayerColor(const ColorType& color);

    /**
     * @brief Makes the corresponding disc move according to the dieces.
     * @param disc_places Places of the discs that move on.
     * @param dices Current dices after rolling.
     */
    virtual void makeMove(std::vector<std::vector<Disc>>& disc_places, const std::array<int, 2>& dices) = 0;
};

#endif /* PLAYER_HPP_INCLUDED */
