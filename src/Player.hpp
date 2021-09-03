/*
 *
 * @file  Player.hpp
 * @brief This file defines Player class.
 *
 */

#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

#include "Color.hpp"
#include "Disc.hpp"

#include <array>
#include <memory>
#include <vector>

class Player
{
protected:

    /**
     * @brief Number of the broken discs of the player.
     */
    int broken_disc_count;

    /**
     * @brief Number of the discs of the player.
     */
    int disc_count;

    /**
     * @brief Color of the player's discs.
     */
    ColorType player_color;

    /**
     * @brief Opponent of the player.
     */
    std::shared_ptr<Player> opponent;

    /**
     * @brief Checks and breaks if there is a single opponent disc on the position.
     * @param disc_places Places of the discs.
     * @param position Position at table to check for broke.
     * @return True If opponent's disc is broken.
     */
    virtual bool checkAndBreakOpponentDisc(std::vector<std::vector<Disc>>& disc_places, const int& position) = 0;

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
     * @brief Returns broken disc count.
     * @return Number of the broken discs.
     */
    int getBrokenDiscCount();

    /**
     * @brief Sets broken disc count.
     * @param Number of the broken discs to be set.
     */
    void setBrokenDiscCount(const int& count);

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
     * @brief Returns opponent of the player.
     * @return Opponent of the player.
     */
    std::shared_ptr<Player> getOpponent();

    /**
     * @brief Sets opponent of the player.
     * @param Opponent of the player.
     */
    void setOpponent(const std::shared_ptr<Player>& opponent);

    /**
     * @brief Makes the corresponding disc move according to the dieces.
     * @param disc_places Places of the discs that move on.
     * @param dice Current dice after rolling.
     */
    virtual void makeMove(std::vector<std::vector<Disc>>& disc_places, const int& dice) = 0;
};

#endif /* PLAYER_HPP_INCLUDED */
