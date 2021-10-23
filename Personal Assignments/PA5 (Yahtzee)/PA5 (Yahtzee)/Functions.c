/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA5
* Date: October 18, 2021, October 21, 2021, October 23, 2021
* Description: This program is Yahtzee.
*/

#include "header.h"

void main_menu()
{
	// Menu Options
	printf("\n1: Display Game Rules\n");
	printf("2: Play Game\n");
	printf("3: Exit\n");
}

void print_rules()
{
	printf("The Rules of Yahtzee:\nThe scorecard used for Yahtzee is composed of two sections.A upper sectionand a lower section.A total of thirteen boxes or thirteen scoring combinations are divided amongst the sections.The upper section consists of boxes that are scored by summing the value of the dice matching the faces of the box.If a player rolls four 3's, then the score placed in the 3's box is the sum of the dice which is 12. Once a player has chosen to score a box, it may not be changedand the combination is no longer in play for future rounds.If the sum of the scores in the upper section is greater than or equal to 63, then 35 more points are added to the players overall score as a bonus.The lower section contains a number of poker like combinations.\n");
}

void display_dice(int die1, int die2, int die3, int die4, int die5)
{
	printf("\nDie 1: %d\nDie 2: %d\nDie 3: %d\nDie 4: %d\nDie 5: %d\n", die1, die2, die3, die4, die5);
}

int* occurance_ary(int d1, int d2, int d3, int d4, int d5)
{
	int dice[] = { d1, d2, d3, d4, d5 }, result = 0, occurances[] = { 0,0,0,0,0,0 };

	// Count the occurances of each number in the roll
	for (int i = 0; i < 5; ++i)
	{
		if (dice[i] == 1)
		{
			++occurances[0];
		}
		if (dice[i] == 2)
		{
			++occurances[1];
		}
		if (dice[i] == 3)
		{
			++occurances[2];
		}
		if (dice[i] == 4)
		{
			++occurances[3];
		}
		if (dice[i] == 5)
		{
			++occurances[4];
		}
		if (dice[i] == 6)
		{
			++occurances[5];
		}
	}
	return occurances;
}

int print_and_validate()
{
	int option;

	do
	{
		main_menu();
		option = get_option();

	} while (option < 1 || option > 3);
	return option;
}

int roll_die()
{
	// Dice 1-6
	return rand() % 6 + 1; // just with %6 it gets 0-5
}

int get_option()
{
	int selection;
	// Prompt for selection
	printf("\nMake your selection: ");
	scanf("%d", &selection);

	return selection;
}

// Checks if the roll is a three of a kind
int is_3_of_kind(int d1, int d2, int d3, int d4, int d5)
{
	int dice[] = { d1, d2, d3, d4, d5 }, occurances[] = { 0,0,0,0,0,0 }, result = 0;
	
	// Count the occurances of each number in the roll
	for (int i = 0; i < 5; ++i)
	{
		if (dice[i] == 1)
		{
			++occurances[0];
		}
		if (dice[i] == 2)
		{
			++occurances[1];
		}
		if (dice[i] == 3)
		{
			++occurances[2];
		}
		if (dice[i] == 4)
		{
			++occurances[3];
		}
		if (dice[i] == 5)
		{
			++occurances[4];
		}
		if (dice[i] == 6)
		{
			++occurances[5];
		}
	}
	
	// Check if any numbers occur at least three times
	for (int j = 0; j < 6; ++j)
	{
		if (occurances[j] >= 3)
		{
			result = 1;
		}
	}
	return result;
}

// Checks if the roll is a four of a kind
int is_4_of_kind(int d1, int d2, int d3, int d4, int d5)
{
	int dice[] = { d1, d2, d3, d4, d5 }, occurances[] = { 0,0,0,0,0,0 }, result = 0;

	// Count the occurances of each number in the roll
	for (int i = 0; i < 5; ++i)
	{
		if (dice[i] == 1)
		{
			++occurances[0];
		}
		if (dice[i] == 2)
		{
			++occurances[1];
		}
		if (dice[i] == 3)
		{
			++occurances[2];
		}
		if (dice[i] == 4)
		{
			++occurances[3];
		}
		if (dice[i] == 5)
		{
			++occurances[4];
		}
		if (dice[i] == 6)
		{
			++occurances[5];
		}
	}

	// Check if any numbers occur at least four times
	for (int j = 0; j < 6; ++j)
	{
		if (occurances[j] >= 4)
		{
			result = 1;
		}
	}
	return result;
}

// Checks if the roll is a pair
int is_pair(int d1, int d2, int d3, int d4, int d5)
{
	int dice[] = { d1, d2, d3, d4, d5 }, occurances[] = { 0,0,0,0,0,0 }, result = 0;

	// Count the occurances of each number in the roll
	for (int i = 0; i < 5; ++i)
	{
		if (dice[i] == 1)
		{
			++occurances[0];
		}
		if (dice[i] == 2)
		{
			++occurances[1];
		}
		if (dice[i] == 3)
		{
			++occurances[2];
		}
		if (dice[i] == 4)
		{
			++occurances[3];
		}
		if (dice[i] == 5)
		{
			++occurances[4];
		}
		if (dice[i] == 6)
		{
			++occurances[5];
		}
	}

	// Check if any numbers occur 2 times
	for (int j = 0; j < 6; ++j)
	{
		if (occurances[j] == 2)
		{
			result = 1;
		}
	}
	return result;
}

// Checks if the roll is a full house
int is_full_house(int d1, int d2, int d3, int d4, int d5)
{
	int three_kind = is_3_of_kind(d1, d2, d3, d4, d5), pair = is_pair(d1, d2, d3, d4, d5), result = 0;
	
	if (three_kind == 1 && pair == 1)
	{
		result = 1;
	}
	return result;
}

// Checks if the roll is a yahtzee
int is_yahtzee(int d1, int d2, int d3, int d4, int d5)
{
	int dice[] = { d1, d2, d3, d4, d5 }, occurances[] = { 0,0,0,0,0,0 }, result = 0;

	// Count the occurances of each number in the roll
	for (int i = 0; i < 5; ++i)
	{
		if (dice[i] == 1)
		{
			++occurances[0];
		}
		if (dice[i] == 2)
		{
			++occurances[1];
		}
		if (dice[i] == 3)
		{
			++occurances[2];
		}
		if (dice[i] == 4)
		{
			++occurances[3];
		}
		if (dice[i] == 5)
		{
			++occurances[4];
		}
		if (dice[i] == 6)
		{
			++occurances[5];
		}
	}

	// Check if any numbers occur five times
	for (int j = 0; j < 6; ++j)
	{
		if (occurances[j] == 5)
		{
			result = 1;
		}
	}
	return result;
}