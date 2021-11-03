/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA6
* Date: October 29, 2021, November 3, 2021
* Description: This program is a game of Battleship.
*/

#include "PA6.h"

int main(void)
{
	char p1_game_board[MAX_ROWS][MAX_COLS];

	init_board(p1_game_board, MAX_ROWS, MAX_COLS);
	print_board(p1_game_board, MAX_ROWS, MAX_COLS);


	return 0;
}