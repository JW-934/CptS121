#include "ConnectFour.h"

void init_board(Board* the_board_ptr)
{
	int row_index = 0, col_index = 0;
	
	(*the_board_ptr).num_rows = MAX_ROWS;
	the_board_ptr->num_cols = MAX_COLS;			 //Points at operator (only for pointers to structs)

	for (; row_index < the_board_ptr->num_rows; ++row_index) // determines the row
	{
		for (col_index = 0; col_index < the_board_ptr->num_cols; ++col_index) // determines the col
		{
			the_board_ptr->game_board[row_index][col_index].token = NONE;
			the_board_ptr->game_board[row_index][col_index].yes_no = NO;
			the_board_ptr->game_board[row_index][col_index].position.row = row_index;
			the_board_ptr->game_board[row_index][col_index].position.col = col_index;
		}
	}
}

void print_board(const Board* the_board_ptr)
{
	int row_index = 0, col_index = 0;

	printf("1 2 3 4 5 6 7\n");
	for (; row_index < the_board_ptr->num_rows; ++row_index) // determines the row
	{
		for (col_index = 0; col_index < the_board_ptr->num_cols; ++col_index) // determines the col
		{
			if (the_board_ptr->game_board[row_index][col_index].yes_no == NO)	// check if empty cell
			{
				printf("%c ", '-');
			}
		}
		putchar('\n');
	}
}