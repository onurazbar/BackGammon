/*
 *
 * @file  Player.cpp
 * @brief This file contains the implementation of Player class.
 *
 */

#include "Player.hpp"

Player::Player(bool computer) : disc_count(15), disc_positions_size(24)
{
    if (computer)
    {
        player_color = red;

        for (int i = 0; i < disc_positions_size; i++)
        {
            disc_positions[i] = 0;
        }

        disc_positions[5] = 5;
        disc_positions[7] = 3;
        disc_positions[12] = 5;
        disc_positions[23] = 2;
    }
    else
    {
        player_color = blue;

        for (int i = 0; i < disc_positions_size; i++)
        {
            disc_positions[i] = 0;
        }

        disc_positions[0] = 2;
        disc_positions[11] = 5;
        disc_positions[16] = 3;
        disc_positions[18] = 5;
    }
}

Player::~Player()
{
}

int Player::getDiscCount()
{
    return disc_count;
}

void Player::setDiscCount(const int& count)
{
    disc_count = count;
}

ColorType Player::getPlayerColor()
{
    return player_color;
}

void Player::setPlayerColor(const ColorType& color)
{
    player_color = color;
}
