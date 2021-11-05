/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab10Task2
* Date: November 3, 2021
* Description: This program is a game of tic tac toe. (Far from complete)
*/

#include "Lab10Task2.h"

int main(void)
{
	Cell game_board[3][3];
	char player = 'X';
	int* row_ptr = -1, * column_ptr = -1;
	Coordinate location;

	// Gets location from player
	move_prompt(player, row_ptr, column_ptr);

	location.row = *row_ptr;
	location.column = *column_ptr;

	game_board[*row_ptr][*column_ptr].occupied = 1;
	game_board[*row_ptr][*column_ptr].symbol = player;
	game_board[*row_ptr][*column_ptr].location = location;
	
	print_board(game_board);
}