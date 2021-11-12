/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA6
* Date: October 29, 2021, November 3, 2021, November 4, 2021, November 8, 2021, November 9, 2021, November 11, 2021, November 12, 2021
* Description: This program is a game of Battleship.
*/

#include "PA6.h"

int main(void)
{
	FILE * outfile = NULL;

	outfile = fopen("battleship.log", "w"); // NOTE: the log file will only update once the program returns
	
	int yes_no = 'j', first_player, p1_ships, p2_ships, is_winner = 0, p1_hits = 0, p2_hits = 0, p1_misses = 0, p2_misses = 0, p1_shots = 0, p2_shots = 0;
	
	// Variables to store how many times each ship has been hit
	int d1_hits = 0, d2_hits = 0, s1_hits = 0, s2_hits = 0, r1_hits = 0, r2_hits = 0, b1_hits = 0, b2_hits = 0, c1_hits = 0, c2_hits = 0;

	char p1_game_board[MAX_ROWS][MAX_COLS], p2_game_board[MAX_ROWS][MAX_COLS], p2_shown_board[MAX_ROWS][MAX_COLS], placeholder[MAX_ROWS][MAX_COLS];

	Stats p1_stats, p2_stats;

	srand((unsigned int)time(NULL));
	
	welcome_screen();

	system("pause");
	system("cls");

	init_stats(&p1_stats);
	init_stats(&p2_stats);

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
		randomly_place_ships(p1_game_board, 2, 'D');
		randomly_place_ships(p1_game_board, 3, 'S');
		randomly_place_ships(p1_game_board, 3, 'R');
		randomly_place_ships(p1_game_board, 4, 'B');
		randomly_place_ships(p1_game_board, 5, 'C');
		p1_ships = 5;
		print_board(p1_game_board, MAX_ROWS, MAX_COLS, 1);
	}

	p2_ships = 5;

	randomly_place_ships(p2_game_board, 2, 'D');
	randomly_place_ships(p2_game_board, 3, 'S');
	randomly_place_ships(p2_game_board, 3, 'R');
	randomly_place_ships(p2_game_board, 4, 'B');
	randomly_place_ships(p2_game_board, 5, 'C');

	first_player = select_who_starts();
	fprintf(outfile, "Game boards generated.\n");
	printf("\nBoth game boards have been generated. Player %d has been selected to start first.\n", first_player);

	if (first_player == 1)
	{
		do
		{
			p1_turn(p2_game_board, p2_shown_board, outfile, &d2_hits, &s2_hits, &r2_hits, &b2_hits, &c2_hits, &p1_stats);
			check_if_sunk(2, &d2_hits, &s2_hits, &r2_hits, &b2_hits, &c2_hits, &p2_ships, outfile);
			print_board(p1_game_board, MAX_ROWS, MAX_COLS, 1);
			print_board(p2_shown_board, MAX_ROWS, MAX_COLS, 2);
			calc_hm_ratio(&p1_stats);

			system("pause");

			p2_turn(p1_game_board, outfile, placeholder, &d1_hits, &s1_hits, &r1_hits, &b1_hits, &c1_hits, &p2_stats);
			check_if_sunk(1, &d1_hits, &s1_hits, &r1_hits, &b1_hits, &c1_hits, &p1_ships, outfile);
			print_board(p1_game_board, MAX_ROWS, MAX_COLS, 1);
			print_board(p2_shown_board, MAX_ROWS, MAX_COLS, 2);
			calc_hm_ratio(&p2_stats);

			system("pause");

		} while (p1_ships != 0 && p2_ships != 0);
	}
	else if (first_player == 2)
	{
		do
		{
			p2_turn(p1_game_board, outfile, placeholder, &d1_hits, &s1_hits, &r1_hits, &b1_hits, &c1_hits, &p2_stats);
			check_if_sunk(1, &d1_hits, &s1_hits, &r1_hits, &b1_hits, &c1_hits, &p1_ships, outfile);
			print_board(p1_game_board, MAX_ROWS, MAX_COLS, 1);
			print_board(p2_shown_board, MAX_ROWS, MAX_COLS, 2);
			calc_hm_ratio(&p2_stats);

			system("pause");

			p1_turn(p2_game_board, p2_shown_board, outfile, &d2_hits, &s2_hits, &r2_hits, &b2_hits, &c2_hits, &p1_stats);
			check_if_sunk(2, &d2_hits, &s2_hits, &r2_hits, &b2_hits, &c2_hits, &p2_ships, outfile);
			print_board(p1_game_board, MAX_ROWS, MAX_COLS, 1);
			print_board(p2_shown_board, MAX_ROWS, MAX_COLS, 2);
			calc_hm_ratio(&p1_stats);

			system("pause");

		} while (p1_ships != 0 && p2_ships != 0);
	}
	
	// Check who won and update corresponding stat
	identify_winner(&p1_stats, &p2_stats, p1_ships, p2_ships, outfile);

	// Print stats to outfile
	fprintf_stats(outfile, &p1_stats, &p2_stats);

	fclose(outfile);
	return 0;
}