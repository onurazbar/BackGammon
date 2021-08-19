/*
 *
 * @file  Player.hpp
 * @brief This file defines Player class.
 *
 */

#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

#include "Color.hpp"

class Player
{
private:

    /**
     * @brief Number of the discs of the player.
     */
    int disc_count;

    /**
     * Size of the disc positions.
     */
    const int disc_positions_size;

    /**
     * @brief Color of the player's discs.
     */
    ColorType player_color;

public:

    /**
     * Stores the number of discs at each position.
     */
    int disc_positions[24];

    /**
     * @brief Default constructor.
     */
    Player(bool computer);

    /**
     * @brief Destructor
     */
    ~Player();

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
};

#endif /* PLAYER_HPP_INCLUDED */
