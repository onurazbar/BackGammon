/*
 *
 * @file  Disc.cpp
 * @brief This file contains the implementation of Disc class.
 */

#include "Disc.hpp"


Disc::Disc()
{
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

std::string Disc::getDiscSymbol()
{
    return disc_symbol;
}

void Disc::setDiscSymbol(const std::string& symbol)
{
    disc_symbol = symbol;
}
