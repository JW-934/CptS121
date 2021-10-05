/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA4
* Date: September 29, 2021, October 1, 2021, October 4, 2021
* Description: This program is a game of craps.
*/

#include "PA4.h"

int main(void)
{
	int option, die1, die2, sum_dice;
	double balance, wager;
	
	srand((unsigned int) time(NULL)); // seed rand, only call once in program

	printf("**********Welcome to the game of Craps**********\n");

	do
	{
		option = print_and_validate();

		switch (option) //all code under selected case will run, add breaks
		{
		case DISPLAY_RULES:
			printf("Rules:\n");
			print_game_rules();
			break;
		
		
		case SET_BALANCE:
			balance = get_game_balance();
			break;
		
		
		case PLAY_GAME:
			wager = get_wager_amount(balance);
			die1 = roll_die();
			die2 = roll_die();				//probably dont keep all this here
			display_dice(die1, die2);
			sum_dice = calculate_sum_dice(die1, die2);
			
			
			
			
			
			
			break;
		
		
		case EXIT:
			break;
		}
	} while (option != 4);
}