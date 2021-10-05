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
	int option, die1, die2, sum_dice, point_value;
	double balance = 2000, wager;
	
	srand((unsigned int) time(NULL)); // seed rand, only call once in program

	printf("**********Welcome to the game of Craps**********\n");

	do
	{
		option = print_and_validate();

		switch (option) //all code under selected case will run, add breaks
		{
		case DISPLAY_RULES:
			printf("\nRules:\n");
			print_game_rules();
			break;
		
		
		case SET_BALANCE:
			balance = get_game_balance();
			break;
		
		
		case PLAY_GAME:
			wager = get_wager_amount(balance);
			
			// Roll, display, and sum dice
			die1 = roll_die();
			die2 = roll_die();			
			display_dice(die1, die2);
			sum_dice = calculate_sum_dice(die1, die2);
			
			// Determine result of first roll, set point value if applicable, and adjust balance
			if (is_win_loss_or_point(sum_dice) == 0)
			{
				balance = adjust_bank_balance(balance, wager, 0);
				printf("\nYou lose. You now have $%.2lf.\n", balance);
			}
			if (is_win_loss_or_point(sum_dice) == -1)
			{
				point_value = sum_dice;
				printf("\nYour point is now %d.\n", sum_dice);
			}
			if (is_win_loss_or_point(sum_dice) == 1)
			{
				balance = adjust_bank_balance(balance, wager, 1);
				printf("\nYou win! You now have $%.2lf.\n", balance);
			}
			
			
			break;
		
		
		case EXIT:
			break;
		}
	} while (option != 4);
}