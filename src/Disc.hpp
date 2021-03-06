/*
 *
 * @file  Disc.hpp
 * @brief This file defines Disc class.
 *
 */

#ifndef DISC_HPP_INCLUDED
#define DISC_HPP_INCLUDED

#include "Color.hpp"

class Disc
{
private:

    /**
     * @brief Color of the disc.
     */
    ColorType disc_color;

    /**
     * @brief Symbol of the disc.
     */
    char disc_symbol;

public:

    /**
     * @brief Default constructor.
     */
    Disc(const ColorType& disc_color);

    /**
     * @brief Destructor.
     */
    ~Disc();

    /**
     * @brief Returns color of the disc.
     * @return Color of the disc.
     */
    ColorType getDiscColor();

    /**
     * @brief Sets disc color.
     * @param Color to be set.
     */
    void setDiscColor(const ColorType& color);

    /**
     * @brief Returns Disc Symbol.
     * @return Symbol of the disc.
     */
    char getDiscSymbol();

    /**
     * @brief Sets disc symbol.
     * @param Symbol to be set.
     */
    void setDiscSymbol(const char& symbol);
};

#endif /* DISC_HPP_INCLUDED */
