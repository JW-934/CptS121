#include "ConnectFour.h"

void init_board(Board* the_board_ptr)
{
	int row_index = 0, col_index = 0;

	// note: (*). is equivalent to ->
	// these operators only work with pointers to structs
	(*the_board_ptr).num_rows = MAX_ROWS;
	the_board_ptr->num_cols = MAX_COLS;

	for (; row_index < the_board_ptr->num_rows;
		++row_index) // the row in the board
	{
		for (col_index = 0; 
			col_index < the_board_ptr->num_cols;
			++col_index) // the col in the board
		{
			// set the cell in the board
			// empty cell - no token color
			the_board_ptr->game_board[row_index][col_index].token = NONE;
			// no token in cell
			the_board_ptr->game_board[row_index][col_index].yes_no = NO;
			// what row is this cell we're initializing in?
			the_board_ptr->game_board[row_index][col_index].position.row = row_index;
			// what row is this cell we're initializing in?
			the_board_ptr->game_board[row_index][col_index].position.col = col_index;
		}
	}
}

// we're passing-by-pointer
// so that a lot less memory is copied. we
// try to preserve memory when we can.
void print_board(const Board* the_board_ptr)
{
	int row_index = 0, col_index = 0;

	printf("1 2 3 4 5 6 7\n"); // column headings

	for (; row_index < the_board_ptr->num_rows;
		++row_index) // the row in the board
	{
		for (col_index = 0;
			col_index < the_board_ptr->num_cols;
			++col_index) // the col in the board
		{
			// let's print a dash for an empty cell in the
			// board
			if (the_board_ptr->game_board[row_index][col_index].yes_no == NO)
			{
				printf("%c ", '-'); // coul also use putchar () here
			}
			else
			{
				// please consider removing the if-else and
				// creating a single switch () statement with 3 cases!
				switch (the_board_ptr->game_board[row_index][col_index].token)
				{
				case RED: printf("%c ", 'r');
					break;
				case BLACK: printf("%c ", 'b');
					break;
				}
			}
		}
		putchar('\n');
	}
}

void place_token(Cell* cell_ptr, Token_color player_token)
{
	(*cell_ptr).token = player_token;
	cell_ptr->yes_no = YES;
}