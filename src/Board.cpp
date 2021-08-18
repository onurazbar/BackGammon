/*
 *
 * @file  Board.cpp
 * @brief This file contains the implementation of Board class.
 *
 */

#include <iostream>

#include "Board.hpp"

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

    std::cout << "board_height: " << board_height << std::endl;
    std::cout << "board_width: " << board_width << std::endl;

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

void Board::drawBoard()
{
    for (int i = 0; i < board_height; i++)
    {
        for (int j = 0; j < board_width; j++)
        {
            std::cout << board_view[i][j];
        }
        std::cout << std::endl;
    }
}

void Board::placeDiscs()
{

}
