/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab10Task2
* Date: November 3, 2021
* Description: This program is a game of tic tac toe.
*/

#include "Lab10Task2.h"

void move_prompt(char player, int* row_ptr, int* column_ptr) 
{
	printf("Player %c it is your turn, choose a location (row column): ");
	scanf("%d %d", *row_ptr, *column_ptr);
	puts('\n');
}

void print_board(Cell game_board[3][3])
{
	for (int i = 0; i < 3; ++i)
	{
		if (game_board[i][0].occupied == 1)
		{
			printf("[%c] ", game_board[i][0].symbol);
		}
		else
		{
			printf("[ ] ");
		}
	}
	printf("\n");
}