/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA5
* Date: October 18, 2021, October 21, 2021
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