/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA6
* Date: October 29, 2021, November 3, 2021, November 4, 2021, November 8, 2021, November 9, 2021, November 11, 2021, November 12, 2021
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

// Generates a random direction for ship placement
int generate_direction()
{
	return rand() % 2;
}

// Checks if the selected space is already occupied by a ship
int check_if_occupied(int direction, int length, int row_start, int col_start, char board[][MAX_COLS])
{
	int row = 0, col = 0, dir = 0, open = 0;

	row = row_start;
	col = col_start;
	dir = direction;

	if (dir == 0)
	{
		do
		{
			if (board[row][col] == '~')
			{
				open = 1; 
				++col;
			}
			else if (board[row][col] != '~')
			{
				return open;
			}
		} while (col < (col_start + length));
	}
	else if (dir == 1)
	{
		do
		{
			if (board[row][col] == '~')
			{
				open = 1;
				++row;
			}
			else if (board[row][col] != '~')
			{
				return open;
			}
		} while (row < (row_start + length));
	}
	return open;
}

// Checks if a shot is a hit or miss.
int check_shot_and_update(int row, int column, char target_board[][MAX_COLS], char tar_shown_board[][MAX_COLS])
{
	if (target_board[row][column] != '~' && target_board[row][column] != '*' && target_board[row][column] != 'm') // If hit
	{
		tar_shown_board[row][column] = '*';

		return 1;
	}
	else // If miss
	{
		tar_shown_board[row][column] = 'm';
		
		return 0;
	}
}

// Initializes all fields in a Stats struct to 0;
void init_stats(Stats* stats)
{
	(*stats).hits = 0;
	(*stats).misses = 0;
	(*stats).shots = 0;
	(*stats).won = 0;
	(*stats).hit_miss_ratio = 0;
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
	int row1, col1, row2, col2, row3, col3, row4, col4, row5, col5, good_input = 0, empty = 0;
	
	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the five cells to place the Carrier across (row column row column...): ");
		scanf(" %d %d %d %d %d %d %d %d %d %d", &row1, &col1, &row2, &col2, &row3, &col3, &row4, &col4, &row5, &col5);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0 && row4 < 10 && row4 >= 0 && col4 < 10 && col4 >= 0 && row5 < 10 && row5 >= 0
			&& col5 < 10 && col5 >= 0)
		{
			good_input = 1;
			if (board[row1][col1] == '~' && board[row2][col2] == '~' && board[row3][col3] == '~' && board[row4][col4] == '~' &&
				board[row5][col5] == '~')
			{
				empty = 1;
			}
		}
	} while (good_input != 1 && empty != 1);

	good_input = 0, empty = 0;

	board[row1][col1] = 'C';
	board[row2][col2] = 'C';
	board[row3][col3] = 'C';
	board[row4][col4] = 'C';
	board[row5][col5] = 'C';

	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the four cells to place the Battleship across (row column row column...): ");
		scanf(" %d %d %d %d %d %d %d %d", &row1, &col1, &row2, &col2, &row3, &col3, &row4, &col4);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0 && row4 < 10 && row4 >= 0 && col4 < 10 && col4 >= 0)
		{
			good_input = 1;
			if (board[row1][col1] == '~' && board[row2][col2] == '~' && board[row3][col3] == '~' && board[row4][col4] == '~')
			{
				empty = 1;
			}
		}
	} while (good_input != 1 && empty != 1);

	good_input = 0, empty = 0;

	board[row1][col1] = 'B';
	board[row2][col2] = 'B';
	board[row3][col3] = 'B';
	board[row4][col4] = 'B';

	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the three cells to place the Cruiser across (row column row column...): ");
		scanf(" %d %d %d %d %d %d", &row1, &col1, &row2, &col2, &row3, &col3);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0)
		{
			good_input = 1;
			if (board[row1][col1] == '~' && board[row2][col2] == '~' && board[row3][col3] == '~')
			{
				empty = 1;
			}
		}
	} while (good_input != 1 && empty != 1);

	good_input = 0, empty = 0;

	board[row1][col1] = 'R';
	board[row2][col2] = 'R';
	board[row3][col3] = 'R';

	print_board(board, MAX_ROWS, MAX_COLS, 1);
	
	do
	{
		printf("Enter the three cells to place the Submarine across (row column row column...): ");
		scanf(" %d %d %d %d %d %d", &row1, &col1, &row2, &col2, &row3, &col3);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0 && row3 < 10
			&& row3 >= 0 && col3 < 10 && col3 >= 0)
		{
			good_input = 1;
			if (board[row1][col1] == '~' && board[row2][col2] == '~' && board[row3][col3] == '~')
			{
				empty = 1;
			}
		}
	} while (good_input != 1 && empty != 1);

	good_input = 0, empty = 0;

	board[row1][col1] = 'S';
	board[row2][col2] = 'S';
	board[row3][col3] = 'S';

	print_board(board, MAX_ROWS, MAX_COLS, 1);

	do
	{
		printf("Enter the two cells to place the Destroyer across (row column row column...): ");
		scanf(" %d %d %d %d", &row1, &col1, &row2, &col2);

		if (row1 < 10 && row1 >= 0 && col1 < 10 && col1 >= 0 && row2 < 10 && row2 >= 0 && col2 < 10 && col2 >= 0)
		{
			good_input = 1;
			if (board[row1][col1] == '~' && board[row2][col2] == '~')
			{
				empty = 1;
			}
		}
	} while (good_input != 1 && empty != 1);

	good_input = 0, empty = 0;

	board[row1][col1] = 'D';
	board[row2][col2] = 'D';

	print_board(board, MAX_ROWS, MAX_COLS, 1);
}

// Populates a game board randomly
void randomly_place_ships(char board[][MAX_COLS], int length, char ship_type)
{
	int row_ind = 0, col_ind = 0, row_start = 0, col_start = 0, dir = 0, open = 0;

	// Generates a starting point and makes sure the space isn't occupied
	do
	{
		dir = generate_direction();
		generate_start_point(&row_start, &col_start, length, dir);
		open = check_if_occupied(dir, length, row_start, col_start, board);
	} while (open == 0);

	// If ship is to be placed horizontally
	if (dir == 0)
	{
		for (col_ind = col_start; col_ind < (length + col_start); col_ind++)
		{
			row_ind = row_start;
			board[row_ind][col_ind] = ship_type;
		}
	}
	// If ship is to be placed vertically
	else if (dir == 1)
	{
		for (row_ind = row_start; row_ind < (length + row_start); row_ind++)
		{
			col_ind = col_start;
			board[row_ind][col_ind] = ship_type;
		}
	}
}

// Generates a random starting point for randomly placed ships
void generate_start_point(int* row_ptr, int* col_ptr, int length, int direction)
{
	if (direction == 0)
	{
		*row_ptr = rand() % MAX_ROWS;
		*col_ptr = rand() % (MAX_COLS - length - 1);
	}
	else
	{
		*row_ptr = rand() % (MAX_ROWS - length - 1);
		*col_ptr = rand() % MAX_COLS;
	}
}

// Generates random coordinates for computer guesses
void random_coordinates(int* row, int* col)
{
	*row = (rand() % MAX_ROWS);
	*col = (rand() % MAX_COLS);
}

// Prompts for a target, checks if it hit, outputs guess to outfile
void p1_turn(char p2_board[][MAX_COLS], char p2_shown_board[][MAX_COLS], FILE* outfile, int* d2_hits, int* s2_hits, int* r2_hits, int* b2_hits, int* c2_hits, Stats* stats)
{
	int row, col, hit_miss;
	char ship;

	printf("\nEnter a cell to fire upon (row column): ");
	scanf(" %d %d", &row, &col);

	ship = p2_board[row][col];

	hit_miss = check_shot_and_update(row, col, p2_board, p2_shown_board);

	if (hit_miss == 1)
	{
		fprintf(outfile, "\nPlayer 1 guessed %d %d, hit.\n", row, col);
		
		add_ship_hit(ship, d2_hits, s2_hits, r2_hits, b2_hits, c2_hits);

		++(*stats).hits;
		++(*stats).shots;

		printf("\nYour shot hit!\n");
	}
	else
	{
		fprintf(outfile, "\nPlayer 1 guessed %d %d, miss.\n", row, col);
		
		++(*stats).misses;
		++(*stats).shots;

		printf("\nYour shot missed!\n");
	}
}

// Prompts for a target, checks if it hit, outputs guess to outfile
void p2_turn(char p1_board[][MAX_COLS], FILE* outfile, char placeholder[][MAX_COLS], int* d1_hits, int* s1_hits, int* r1_hits, int* b1_hits, int* c1_hits, Stats* stats)
{
	int row, col, hit_miss;
	char ship;

	random_coordinates(&row, &col);

	ship = p1_board[row][col];

	hit_miss = check_shot_and_update(row, col, p1_board, p1_board);

	if (hit_miss == 1)
	{
		fprintf(outfile, "\nComputer guessed %d %d, hit.\n", row, col);

		add_ship_hit(ship, d1_hits, s1_hits, r1_hits, b1_hits, c1_hits);

		++(*stats).hits;
		++(*stats).shots;

		printf("\nThe computer guessed %d %d, it hit.\n", row, col);
	}
	else
	{
		fprintf(outfile, "\nComputer guessed %d %d, miss.\n", row, col);

		++(*stats).misses;
		++(*stats).shots;

		printf("\nThe computer guessed %d %d, it missed.\n", row, col);
	}
}

// Adds one hit to the specified ship
void add_ship_hit(char type, int* d_hits, int* s_hits, int* r_hits, int* b_hits, int* c_hits)
{
	if (type == 'D')
	{
		++* d_hits;
	}
	if (type == 'S')
	{
		++* s_hits;
	}
	if (type == 'R')
	{
		++* r_hits;
	}
	if (type == 'B')
	{
		++* b_hits;
	}
	if (type == 'C')
	{
		++* c_hits;
	}
}

// Checks if any ships sunk, updates corresponding variable and prints to logfile 
void check_if_sunk(int player, int* d_hits, int* s_hits, int* r_hits, int* b_hits, int* c_hits, int* player_ships, FILE* outfile)
{
	if (*d_hits == 2)
	{
		fprintf(outfile, "\nPlayer %d's Destroyer sunk.\n", player);
		*d_hits = -1;
		--*player_ships;
		printf("\nPlayer %d's Destroyer is sunk!\n", player);
	}
	if (*s_hits == 3)
	{
		fprintf(outfile, "\nPlayer %d's Submarine sunk.\n", player);
		*s_hits = -1;
		--*player_ships;
		printf("\nPlayer %d's Submarine is sunk!\n", player);
	}
	if (*r_hits == 3)
	{
		fprintf(outfile, "\nPlayer %d's Cruiser sunk.\n", player);
		*r_hits = -1;
		--*player_ships;
		printf("\nPlayer %d's Cruiser is sunk!\n", player);
	}
	if (*b_hits == 4)
	{
		fprintf(outfile, "\nPlayer %d's Battleship sunk.\n", player);
		*b_hits = -1;
		--*player_ships;
		printf("\nPlayer %d's Battleship is sunk!\n", player);
	}
	if (*c_hits == 5)
	{
		fprintf(outfile, "\nPlayer %d's Carrier sunk.\n", player);
		*c_hits = -1;
		--*player_ships;
		printf("\nPlayer %d's Carrier is sunk!\n", player);
	}
}

// Calculates hit miss ratio and updates stat field
void calc_hm_ratio(Stats* stats)
{
	(*stats).hit_miss_ratio = ((double)(*stats).hits / (double)(*stats).misses);
}

// Determine who won
void identify_winner(Stats* p1_stats, Stats* p2_stats, int p1_ships, int p2_ships, FILE* outfile)
{
	// Determine who won
	if (p1_ships == 0)
	{
		(*p2_stats).won = 1;

		fprintf(outfile, "Player 2 won.");

		printf("\nPlayer 2 wins!\n");
	}
	else if (p2_ships == 0)
	{
		(*p1_stats).won = 1;

		fprintf(outfile, "Player 1 won.");

		printf("\nPlayer 1 wins!\n");
	}
}

// Prints both players' stats to logfile
void fprintf_stats(FILE* outfile, Stats* p1_stats, Stats* p2_stats)
{
	fprintf(outfile, "\nPlayer 1 Stats:\n");
	fprintf(outfile, "Total shots: %d\n", (*p1_stats).shots);
	fprintf(outfile, "Hits: %d\n", (*p1_stats).hits);
	fprintf(outfile, "Misses: %d\n", (*p1_stats).misses);
	fprintf(outfile, "Hit/Miss Ratio: %.2lf\n", (*p1_stats).hit_miss_ratio);

	fprintf(outfile, "\nPlayer 2 Stats:\n");
	fprintf(outfile, "Total shots: %d\n", (*p2_stats).shots);
	fprintf(outfile, "Hits: %d\n", (*p2_stats).hits);
	fprintf(outfile, "Misses: %d\n", (*p2_stats).misses);
	fprintf(outfile, "Hit/Miss Ratio: %.2lf\n", (*p2_stats).hit_miss_ratio);

	printf("Statistics outputted to logfile successfully!");
}