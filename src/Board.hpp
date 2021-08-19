/*
 *
 * @file  Board.hpp
 * @brief This file defines Board class.
 *
 */

#ifndef BOARD_HPP_INCLUDED
#define BOARD_HPP_INCLUDED

class Board
{
private:

    /**
     * @brief Height of the board.
     */
    const int board_height;

    /**
     * @brief Width of the board.
     */
    const int board_width;

public:

    /**
     * @brief Board view.
     */
    char board_view[22][21];

    /**
     * @brief Default constructor.
     */
    Board();

    /**
     * Destructor.
     */
    ~Board();

    /**
     * @brief Draws the board on terminal.
     */
    void drawBoard();
};

#endif /* BOARD_HPP_INCLUDED */
