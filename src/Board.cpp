/*
 *
 * @file  Board.cpp
 * @brief This file contains the implementation of Board class.
 *
 */

#include "Board.hpp"

#include <iostream>

Board::Board() : board_height(22), board_width(21)
{
    /*board_view = {
            "|||||||||||||||||||||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||      |||      |||",
            "|||||||||||||||||||||"
    };*/

    for (int i = 0; i < board_height; i++)
    {
        for (int j = 0; j < board_width; j++)
        {
            if ((i == 0) || (i == 21))
            {
                board_view[i][j] = '|';
            }
            else
            {
                if (((j > 2) && (j < 9)) || ((j > 11) && (j < 18)))
                {
                    board_view[i][j] = ' ';
                }
                else
                {
                    board_view[i][j] = '|';
                }
            }
        }
    }
}

Board::~Board()
{
}

void Board::clearBoard()
{
    for (int i = 0; i < board_height; i++)
    {
        for (int j = 0; j < board_width; j++)
        {
            if (((i > 0) && i < (board_height - 1)) &&
                (((j > 2) && (j < 9)) || ((j > 11) && (j < 18))))
            {
                board_view[i][j] = ' ';
            }
        }
    }
}

void Board::drawBoard()
{
    std::cout << std::endl;

    for (int i = 0; i < board_height; i++)
    {
        for (int j = 0; j < board_width; j++)
        {
            std::cout << board_view[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}

void Board::placeDisc(unsigned int x, unsigned int y, Disc disc)
{
    unsigned int i = 0;
    unsigned int j = 0;

    if ((x >= 0) && (x <= 5))
    {
        i = y + 1;
        j = x + 3;
    }
    else if ((x >= 6) && (x <= 11))
    {
        i = y + 1;
        j = x + 6;
    }
    else if ((x >= 12) && (x <= 17))
    {
        i = board_height - y - 2;
        j = 23 - x + 6;
    }
    else if ((x >= 18) && (x <= 23))
    {
        i = board_height - y - 2;
        j = 23 - x + 3;
    }

    board_view[i][j] = disc.getDiscSymbol();
}
