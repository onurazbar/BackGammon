/*
 *
 * @file  Player.cpp
 * @brief This file contains the implementation of Player class.
 *
 */

#include "Player.hpp"

Player::Player()
{
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
