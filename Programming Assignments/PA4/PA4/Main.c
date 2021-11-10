/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA4
* Date: September 29, 2021, October 1, 2021, October 4, 2021, October 11, 2021, October 12, 2021
* Description: This program is a game of craps.
*/

#include "PA4.h"

int main(void)
{
	int option, die1, die2, sum_dice, point_value = -1, win_loss = 0, rolls = 0;
	double balance = 2000, old_balance = 2000, initial_balance = 2000, wager;
	
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
			
			initial_balance = balance;
			old_balance = balance;
			
			printf("\nThis will be roll %d.\n", rolls = 1);

			wager = get_wager_amount(balance);
			
			if (wager >= (0.5 * balance))
			{
				printf("\nIrresponsibility or confidence? Maybe both?\n");
			}

			// Roll, display, and sum dice
			die1 = roll_die();
			die2 = roll_die();			
			rolls = 1;
			display_dice(die1, die2);
			sum_dice = calculate_sum_dice(die1, die2);
			
			// Determine result of first roll, set point value if applicable, and adjust balance
			if (is_win_loss_or_point(sum_dice) == 0)
			{
				balance = adjust_bank_balance(balance, wager, 0);
				chatter_messages(rolls, is_win_loss_or_point(sum_dice), old_balance, balance, initial_balance);
				old_balance = balance;
				//printf("\nYou lost. You now have $%.2lf.\n", balance);
			}
			if (is_win_loss_or_point(sum_dice) == -1)
			{
				point_value = sum_dice;
				printf("\nYour point is now %d.\n", sum_dice);
				printf("\nThis will be roll %d.\n", rolls + 1);
			}
			if (is_win_loss_or_point(sum_dice) == 1)
			{
				balance = adjust_bank_balance(balance, wager, 1);
				chatter_messages(rolls, is_win_loss_or_point(sum_dice), old_balance, balance, initial_balance);
				old_balance = balance;
				//printf("\nYou won! You now have $%.2lf.\n", balance);
			}
			rolls = 1;
			
			// Pause then roll again
			do
			{
				/*printf("To continue playing:");
				system("pause");*/
				
				wager = get_wager_amount(balance);

				if (wager >= (0.5 * balance))
				{
					printf("\nIrresponsibility or confidence? Maybe both?\n");
				}

				die1 = roll_die();
				die2 = roll_die();
				display_dice(die1, die2);
				sum_dice = calculate_sum_dice(die1, die2);

				if (is_point_loss_or_neither(sum_dice, point_value) == 1)
				{
					balance = adjust_bank_balance(balance, wager, 1);
					win_loss = 1;
					printf("\nYou win the game! You rolled your point of %d.\n", point_value);
				}

				if (is_point_loss_or_neither(sum_dice, point_value) == 0)
				{
					balance = adjust_bank_balance(balance, wager, 0);
					win_loss = -1;
					printf("\nYou lose the game! You rolled 7.\n");
				}

				if (is_point_loss_or_neither(sum_dice, point_value) == -1)
				{
					balance = adjust_bank_balance(balance, wager, 0);
					if (point_value != -1)
					{
						printf("\nYou lost this round! You didn't roll your point of %d.\n", point_value);
					}
					else {
						printf("\nYou lost this round!\n");
					}
					chatter_messages(rolls, is_point_loss_or_neither(sum_dice, point_value), old_balance, balance, initial_balance);
				}

				rolls += 1;
			} while (win_loss == 0);
			
			printf("\nYour final balance was $%.2lf.\n", balance);
			
			break;
		
		case EXIT:
			break;
		}
	} while (option != 4);
}