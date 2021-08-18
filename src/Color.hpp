/*
 *
 * @file Color.hpp
 * @brief This file defines colors.
 *
 */

#ifndef COLOR_HPP_INCLUDED
#define COLOR_HPP_INCLUDED

#include <string>

static const std::string red_disc_symbol = "\033[31mO";
static const std::string blue_disc_symbol = "\033[34mO";

enum ColorType
{
    red = 0,
    blue
};

#endif /* COLOR_HPP_INCLUDED */
