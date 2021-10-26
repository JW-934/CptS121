/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA5
* Date: October 18, 2021, October 21, 2021, October 23, 2021, October 25, 2021
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
	printf("\nThe Rules of Yahtzee:\nThe scorecard used for Yahtzee is composed of two sections.A upper sectionand a lower section.A total of thirteen boxes or thirteen scoring combinations are divided amongst the sections.The upper section consists of boxes that are scored by summing the value of the dice matching the faces of the box.If a player rolls four 3's, then the score placed in the 3's box is the sum of the dice which is 12. Once a player has chosen to score a box, it may not be changedand the combination is no longer in play for future rounds.If the sum of the scores in the upper section is greater than or equal to 63, then 35 more points are added to the players overall score as a bonus.The lower section contains a number of poker like combinations.\n");
}

void display_dice(int die1, int die2, int die3, int die4, int die5)
{
	printf("\nDie 1: %d\nDie 2: %d\nDie 3: %d\nDie 4: %d\nDie 5: %d\n", die1, die2, die3, die4, die5);
}

// Count the occurances of each number in the roll(Populates occurances[])
int* occurance_ary(int d1, int d2, int d3, int d4, int d5, int* occurances)
{
	int dice[] = { d1, d2, d3, d4, d5 }, result = 0;

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

int* bubble_sort(int list[], int size)
{
	int temp = 0, passes = 0, index = 0;

	for (; passes < size - 1; ++passes) 
	{
		for (index = 0; index < size - passes - 1;
			++index)
		{
			if (list[index] > list[index + 1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}
	}

	return list;
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
int is_3_of_kind(int* occurances)
{
	int result = 0;
	//int dice[] = { d1, d2, d3, d4, d5 }, result = 0;
	
	//// Count the occurances of each number in the roll
	//for (int i = 0; i < 5; ++i)
	//{
	//	if (dice[i] == 1)
	//	{
	//		++occurances[0];
	//	}
	//	if (dice[i] == 2)
	//	{
	//		++occurances[1];
	//	}
	//	if (dice[i] == 3)
	//	{
	//		++occurances[2];
	//	}
	//	if (dice[i] == 4)
	//	{
	//		++occurances[3];
	//	}
	//	if (dice[i] == 5)
	//	{
	//		++occurances[4];
	//	}
	//	if (dice[i] == 6)
	//	{
	//		++occurances[5];
	//	}
	//}
	
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
int is_4_of_kind(int* occurances)
{
	int result = 0;
	//int dice[] = { d1, d2, d3, d4, d5 }, result = 0;

	//// Count the occurances of each number in the roll
	//for (int i = 0; i < 5; ++i)
	//{
	//	if (dice[i] == 1)
	//	{
	//		++occurances[0];
	//	}
	//	if (dice[i] == 2)
	//	{
	//		++occurances[1];
	//	}
	//	if (dice[i] == 3)
	//	{
	//		++occurances[2];
	//	}
	//	if (dice[i] == 4)
	//	{
	//		++occurances[3];
	//	}
	//	if (dice[i] == 5)
	//	{
	//		++occurances[4];
	//	}
	//	if (dice[i] == 6)
	//	{
	//		++occurances[5];
	//	}
	//}

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

// Checks if the roll has a pair
int is_pair(int* occurances)
{
	int result = 0;
	//int dice[] = { d1, d2, d3, d4, d5 }, result = 0;

	//// Count the occurances of each number in the roll
	//for (int i = 0; i < 5; ++i)
	//{
	//	if (dice[i] == 1)
	//	{
	//		++occurances[0];
	//	}
	//	if (dice[i] == 2)
	//	{
	//		++occurances[1];
	//	}
	//	if (dice[i] == 3)
	//	{
	//		++occurances[2];
	//	}
	//	if (dice[i] == 4)
	//	{
	//		++occurances[3];
	//	}
	//	if (dice[i] == 5)
	//	{
	//		++occurances[4];
	//	}
	//	if (dice[i] == 6)
	//	{
	//		++occurances[5];
	//	}
	//}

	// Check if any numbers occur 2 or more times
	for (int j = 0; j < 6; ++j)
	{
		if (occurances[j] >= 2)
		{
			result = 1;
		}
	}
	return result;
}

// Checks if the roll is a full house
int is_full_house(int* dice)
{
	int result = 0;

	if (dice[0] == dice[1] && dice[1] == dice[2] && dice[3] == dice[4])
	{
		result = 1;
	}
	else if (dice[4] == dice[3] && dice[3] == dice[2] && dice[1] == dice[0])
	{
		result = 1;
	}
	return result;
}

// Checks if the roll is a yahtzee
int is_yahtzee(int* occurances)
{
	int result = 0;
	//int dice[] = { d1, d2, d3, d4, d5 }, result = 0;

	//// Count the occurances of each number in the roll
	//for (int i = 0; i < 5; ++i)
	//{
	//	if (dice[i] == 1)
	//	{
	//		++occurances[0];
	//	}
	//	if (dice[i] == 2)
	//	{
	//		++occurances[1];
	//	}
	//	if (dice[i] == 3)
	//	{
	//		++occurances[2];
	//	}
	//	if (dice[i] == 4)
	//	{
	//		++occurances[3];
	//	}
	//	if (dice[i] == 5)
	//	{
	//		++occurances[4];
	//	}
	//	if (dice[i] == 6)
	//	{
	//		++occurances[5];
	//	}
	//}

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

int is_small_straight(int* dice)
{
	int result = 0;

	if (dice[1] == dice[0] + 1 && dice[2] == dice[1] + 1 && dice[3] == dice[2] + 1 && dice[4] == dice[3] + 1)
	{
		result = 1;
	}
	return result;
}

int is_large_straight(int* dice)
{
	int result = 0;

	if (dice[1] == dice[0] + 1 && dice[2] == dice[1] + 1 && dice[3] == dice[2] + 1 && dice[4] == dice[3] + 1 && dice[5] == dice[4] + 1)
	{
		result = 1;
	}
	return result;
}

int apply_combination(int combination, int points, int* occurances_ptr, int dice_sum, int* dice_ptr, int* upper_ptr)
{
	int sum;

	// Upper section
	if (combination == 1)
	{
		sum = occurances_ptr[0];
		points = points + sum;
		*upper_ptr = *upper_ptr + sum;
		printf("\nYou have %d ones, you get %d points.\n", occurances_ptr[0], sum);
	}
	if (combination == 2)
	{
		sum = occurances_ptr[1] * 2;
		points = points + sum;
		*upper_ptr = *upper_ptr + sum;
		printf("\nYou have %d twos, you get %d points.\n", occurances_ptr[1], sum);
	}
	if (combination == 3)
	{
		sum = occurances_ptr[2] * 3;
		points = points + sum;
		*upper_ptr = *upper_ptr + sum;
		printf("\nYou have %d threes, you get %d points.\n", occurances_ptr[2], sum);
	}
	if (combination == 4)
	{
		sum = occurances_ptr[3] * 4;
		points = points + sum;
		*upper_ptr = *upper_ptr + sum;
		printf("\nYou have %d fours, you get %d points.\n", occurances_ptr[3], sum);
	}
	if (combination == 5)
	{
		sum = occurances_ptr[4] * 5;
		points = points + sum;
		*upper_ptr = *upper_ptr + sum;
		printf("\nYou have %d fives, you get %d points.\n", occurances_ptr[4], sum);
	}
	if (combination == 6)
	{
		sum = occurances_ptr[5] * 6;
		points = points + sum;
		*upper_ptr = *upper_ptr + sum;
		printf("\nYou have %d sixes, you get %d points.\n", occurances_ptr[5], sum);
	}
	//

	// Three of a kind
	if (combination == 7)
	{
		if (is_3_of_kind(occurances_ptr) == 1)
		{
			points = points + dice_sum;
			printf("\nYou have a three of a kind! You get %d points.\n", &dice_sum);
		}
		else
		{
			printf("\nYou do not have a three of a kind! You get 0 points.\n");
		}
	}

	// Four of a kind
	if (combination == 8)
	{
		if (is_4_of_kind(occurances_ptr) == 1)
		{
			points = points + dice_sum;
			printf("\nYou have a four of a kind! You get %d points.\n", &dice_sum);
		}
		else
		{
			printf("\nYou do not have a four of a kind! You get 0 points.\n");
		}
	}

	// Full house
	if (combination == 9)
	{
		if (is_full_house(dice_ptr) == 1)
		{
			points = points + 25;
			printf("\nYou have a full house! You get 25 points.\n");
		}
		else
		{
			printf("\nYou do not have a full house! You get 0 points.\n");
		}
	}

	// Small straight
	if (combination == 10)
	{
		if (is_small_straight(dice_ptr) == 1)
		{
			points = points + 30;
			printf("\nYou have a small straight! You get 30 points.\n");
		}
		else
		{
			printf("\nYou do not have a small straight! You get 0 points.\n");
		}
	}

	// Large straight
	if (combination == 11)
	{
		if (is_large_straight(dice_ptr) == 1)
		{
			points = points + 40;
			printf("\nYou have a large straight! You get 40 points.\n");
		}
		else
		{
			printf("\nYou do not have a large straight! You get 0 points.\n");
		}
	}

	// Yahtzee
	if (combination == 12)
	{
		if (is_yahtzee(occurances_ptr) == 1)
		{
			points = points + 50;
			printf("\nYou have a yahtzee! You get 50 points.\n");
		}
		else
		{
			printf("\nYou do not have a yahtzee! You get 0 points.\n");
		}
	}

	// Chance
	if (combination == 13)
	{
		points = points + dice_sum;
		printf("\nYou get %d points.\n", dice_sum);
	}
	return points;
}

char combo_prompt()
{
	char yes_no;

	printf("\nWould you like to use this roll for a combination (y/n)?\n");

	printf(">");
	scanf(" %c", &yes_no);
	
	return yes_no;
}