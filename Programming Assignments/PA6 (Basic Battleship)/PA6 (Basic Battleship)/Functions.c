/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA6
* Date: October 29, 2021, November 3, 2021, November 4, 2021, November 8, 2021
* Description: This program is a game of Battleship.
*/

#include "PA6.h"

// Randomly chooses between player 1 and 2
int select_who_starts()
{
	return rand() % 2 + 1;
}

// Checks if either player has won
int is_winner(int p1_ships, int p2_ships)
{
	if (p1_ships == 0)
	{
		printf("Player 2 wins!");
		return 2;
	}
	else if (p2_ships == 0)
	{
		printf("Player 1 wins!");
		return 1;
	}
	else
	{
		return 0;
	}
}

int generate_direction()
{
	return rand() % 2;
}

// Welcomes user and prints game rules
void welcome_screen()
{
	printf("***** Welcome to Battleship! *****\n\n");
	printf("Rules:\nBattleship is a two player Navy game. The objective of the game is to sink all ships in your enemy's fleet. The Player to sink his/her enemy's fleet first wins. Both players' fleets consist of 5 ships that are hidden from the enemy. Each ship may be differentiated by its \"size\" (besides the Cruiser and Submarine) or number of cells it expands on the game board. The Carrier has 5 cells, Battleship has 4 cells, Cruiser has 3 cells, Submarine has 3 cells, and the Destroyer has 2 cells.\n\n");
}

// Initializes game board
void init_board(char board[][MAX_COLS], int num_rows, int num_cols)
{
	int row_index = 0, col_index = 0;

	for (; row_index < num_rows; ++row_index)
	{
		for (col_index = 0; col_index < num_cols; ++col_index)
		{
			board[row_index][col_index] = '~';
		}
	}
}

// Displays game board
void print_board(char board[][MAX_COLS], int num_rows, int num_cols, int player)
{
	int row_index = 0, col_index = 0;

	printf("\nPlayer %d's Board:\n", player);
	printf("  0 1 2 3 4 5 6 7 8 9\n");
	for (; row_index < num_rows; ++row_index)
	{
		printf("%d ", row_index);
		for (col_index = 0; col_index < num_cols; ++col_index)
		{
			printf("%c ", board[row_index][col_index]);
		}
		putchar('\n');
	}
}

// Prompts user to place each ship
void manually_place_ships(char board[][MAX_COLS])
{
	int row1, col1, row2, col2, row3, col3, row4, col4, row5, col5, good_input = 0;
	
	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the five cells to place the Carrier across (row, column row, column...): ");
		scanf("%d, %d %d, %d %d, %d %d, %d %d, %d", &row1, &col1, &row2, &col2, &row3, &col3, &row4, &col4, &row5, &col5);
	
		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0 && row4 < 10 && row4 >= 0 && col4 < 10 && col4 >= 0 && row5 < 10 && row5 >= 0
			&& col5 < 10 && col5 >= 0)
		{
			good_input = 1;
		}
	} while (good_input == 0);

	good_input = 0;

	board[row1][col1] = 'c';
	board[row2][col2] = 'c';
	board[row3][col3] = 'c';
	board[row4][col4] = 'c';
	board[row5][col5] = 'c';

	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the four cells to place the Battleship across (row, column row, column...): ");
		scanf("%d, %d %d, %d %d, %d %d, %d", &row1, &col1, &row2, &col2, &row3, &col3, &row4, &col4);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0 && row4 < 10 && row4 >= 0 && col4 < 10 && col4 >= 0)
		{
			good_input = 1;
		}
	} while (good_input == 0);

	good_input = 0;

	board[row1][col1] = 'b';
	board[row2][col2] = 'b';
	board[row3][col3] = 'b';
	board[row4][col4] = 'b';

	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the three cells to place the Cruiser across (row, column row, column...): ");
		scanf("%d, %d %d, %d %d, %d", &row1, &col1, &row2, &col2, &row3, &col3);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0)
		{
			good_input = 1;
		}
	} while (good_input == 0);

	good_input = 0;

	board[row1][col1] = 'r';
	board[row2][col2] = 'r';
	board[row3][col3] = 'r';

	print_board(board, MAX_ROWS, MAX_COLS, 1);
	
	do
	{
		printf("Enter the three cells to place the Submarine across (row, column row, column...): ");
		scanf("%d, %d %d, %d %d, %d", &row1, &col1, &row2, &col2, &row3, &col3);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0)
		{
			good_input = 1;
		}
	} while (good_input == 0);

	good_input = 0;

	board[row1][col1] = 's';
	board[row2][col2] = 's';
	board[row3][col3] = 's';

	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the two cells to place the Destroyer across (row, column row, column...): ");
		scanf("%d, %d %d, %d", &row1, &col1, &row2, &col2);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0)
		{
			good_input = 1;
		}
	} while (good_input == 0);

	good_input = 0;

	board[row1][col1] = 'd';
	board[row2][col2] = 'd';

	print_board(board, MAX_ROWS, MAX_COLS, 1);
}

void randomly_place_ships(char board[][MAX_COLS])
{

}

void generate_start_point(int* row_ptr, int* col_ptr, int ship_length)
{
	*row_ptr = rand() % 10;
	*col_ptr = rand() % (10 - ship_length + 1);
}