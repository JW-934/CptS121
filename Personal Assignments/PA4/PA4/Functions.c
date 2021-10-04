/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA4
* Date: September 29, 2021, October 1, 2021, October 4, 2021
* Description: This program is a game of craps.
*/

#include "PA4.h"

void main_menu()
{
	// Menu Options
	printf("1: Display Game Rules\n");
	printf("2: Set Initial Bank Balance\n");
	printf("3: Play Game\n");
	printf("4: Exit\n");
}

void print_game_rules()
{
	printf("A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots. After the dice have come to rest, the sum of the spots on the two upward faces is calculated. If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3, or 12 on the first throw (called \"craps\"), the player loses (i.e. the \"house\" wins). If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the player's \"point.\" To win, you must continue rolling the dice until you \"make your point.\" The player loses by rolling a 7 before making the point.\n");
}

double get_game_balance()
{
	double balance;
	
	printf("Enter your bank balance: ");
	scanf("%lf", &balance);

	return balance;
}

double get_wager_amount()
{
	double wager;

	printf("Enter your wager amount: ");
	scanf("%lf", &wager);

	return wager;
}

int check_wager_amount(double wager, double balance)
{
	int enough_money = 0;

	if (wager <= balance)
	{
		enough_money = 1;
	}

	return enough_money;
}

int roll_die()
{
	// Dice 1-6
	return rand() % 6 + 1; // just with %6 it gets 0-5
}

void display_dice(int die1, int die2)
{
	printf("Die 1: %d\nDie 2: %d\n", die1, die2);
}

int calculate_sum_dice(int die1_value, int die2_value)
{
	return die1_value + die2_value;
}

int is_win_loss_or_point(int sum_dice)
{

}

int is_point_loss_or_neither(int sum_dice, int point_value) 
{

}

double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract)
{

}

void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance)
{

}

int print_and_validate()
{
	int option;
	
	do
	{
		main_menu();
		option = get_option();

	} while (option < 1 || option > 4);
	return option;
}

int get_option()
{
	int selection;
	// Prompt for selection
	printf("Make your selection: ");
	scanf("%d", &selection);
	
	return selection;
}