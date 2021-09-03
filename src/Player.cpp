/*
 *
 * @file  Player.cpp
 * @brief This file contains the implementation of Player class.
 *
 */

#include "Player.hpp"

#include <iostream>

Player::Player(const ColorType& color_type) : broken_disc_count(0), disc_count(15), player_color(color_type)
{
}

Player::~Player()
{
}

int Player::getBrokenDiscCount()
{
    return broken_disc_count;
}

void Player::setBrokenDiscCount(const int& count)
{
    broken_disc_count = count;
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

std::shared_ptr<Player> Player::getOpponent()
{
    return opponent;
}

void Player::setOpponent(const std::shared_ptr<Player>& opponent)
{
    this->opponent = opponent;
}
