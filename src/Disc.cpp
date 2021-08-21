/*
 *
 * @file  Disc.cpp
 * @brief This file contains the implementation of Disc class.
 */

#include "Disc.hpp"

Disc::Disc(const ColorType& disc_color): disc_color(disc_color)
{
    if (disc_color == blue)
    {
        disc_symbol = blue_disc_symbol;
    }
    else
    {
        disc_symbol = red_disc_symbol;
    }
}

Disc::~Disc()
{
}

ColorType Disc::getDiscColor()
{
    return disc_color;
}

void Disc::setDiscColor(const ColorType& color)
{
    disc_color = color;
}

char Disc::getDiscSymbol()
{
    return disc_symbol;
}

void Disc::setDiscSymbol(const char& symbol)
{
    disc_symbol = symbol;
}
