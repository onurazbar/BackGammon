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

    /**
     * @brief Board view.
     */
    char board_view[22][21];

public:

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

    /**
     * @brief Place the discs on the board.
     */
    void placeDiscs();
};

#endif /* BOARD_HPP_INCLUDED */
