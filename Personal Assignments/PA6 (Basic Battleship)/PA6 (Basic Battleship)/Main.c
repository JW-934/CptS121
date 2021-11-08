/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA6
* Date: October 29, 2021, November 3, 2021, November 4, 2021, November 8, 2021
* Description: This program is a game of Battleship.
*/

#include "PA6.h"

int main(void)
{
	FILE* infile = NULL, * outfile = NULL;

	outfile = fopen("battleship.log", "w");
	
	int yes_no = 'j', curr_player, p1_ships, p2_ships, winner;
	char p1_game_board[MAX_ROWS][MAX_COLS], p2_game_board[MAX_ROWS][MAX_COLS], p2_shown_board[MAX_ROWS][MAX_COLS];

	srand((unsigned int)time(NULL));
	
	welcome_screen();

	system("pause");
	system("cls");

	init_board(p1_game_board, MAX_ROWS, MAX_COLS);
	init_board(p2_game_board, MAX_ROWS, MAX_COLS);
	init_board(p2_shown_board, MAX_ROWS, MAX_COLS);
	
	// Prompt if user wants to manually place ships
	do
	{
		printf("Would you like to manually place your ships (y/n)? >");
		scanf(" %c", &yes_no);

	} while (yes_no != 'y' && yes_no != 'Y' && yes_no != 'n' && yes_no != 'N');

	if (yes_no == 'y' || yes_no == 'Y')
	{
		manually_place_ships(p1_game_board);
		p1_ships = 5;
		print_board(p1_game_board, MAX_ROWS, MAX_COLS, 1);
	}
	else
	{
		//randomly_place_ships(p1_game_board);
		p1_ships = 5;
		print_board(p1_game_board, MAX_ROWS, MAX_COLS, 1);
	}

	//randomly_place_ships(p2_game_board);
	p2_ships = 5;

	curr_player = select_who_starts();
	printf("\nBoth game boards have been generated. Player %d has been selected to start first.\n", curr_player);

	
	



	fclose(outfile);
	return 0;
}