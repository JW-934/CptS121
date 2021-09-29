/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA4
* Date: September 29, 2021
* Description: This program is a game of craps.
*/

#include "PA4.h"

void print_game_rules()
{
	printf();
}

double get_game_balance()
{
	double balance;
	
	printf("Enter your initial balance: ");
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