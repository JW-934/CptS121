/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA7
* Date: November 15, 2021, November 20, 2021
* Description: This program is a game of Poker.
*/

#include "poker.h"

// Only accepts menu options 1-3
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

// Prompt user for a menu option
int get_option()
{
	int selection;
	// Prompt for selection
	printf("\nMake your selection: ");
	scanf("%d", &selection);

	return selection;
}

/* shuffle cards in deck */

void shuffle(int wDeck[][13])
{
	int row = 0;    /* row number */
	int column = 0; /*column number */
	int card = 0;   /* card counter */

	/* for each of the 52 cards, choose slot of deck randomly */
	for (card = 1; card <= 52; card++)
	{
		/* choose new random location until unoccupied slot found */
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		} while (wDeck[row][column] != 0);

		/* place card number in chosen slot of deck */
		wDeck[row][column] = card;
	}
}

/* deal cards in deck */
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[], Hand hand, int num_cards)
{
	int row = 0;    /* row number */
	int column = 0; /*column number */
	int card = 0;   /* card counter */

	// deal num_cards cards
	for (card = 1; card <= num_cards; card++)
	{
		/* loop through rows of wDeck */
		for (row = 0; row <= 3; row++)
		{
			/* loop through columns of wDeck for current row */
			for (column = 0; column <= 12; column++)
			{
				/* if slot contains current card, display card */
				if (wDeck[row][column] == card)
				{
					printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}

// Print game rules
void print_rules()
{
	printf("\nPoker rules placeholder.\n");
}

// Set all values in the Cards inside a Hand to -1 to initialize
void init_hand(Hand* hand)
{
	for (int i = 0; i < 5; ++i)
	{
		(*hand).cards[i].face_ind = -1;
		(*hand).cards[i].suit_ind = -1;
	}
}

// Print menu options
void main_menu()
{
	// Menu Options
	printf("\n1: Display Game Rules\n");
	printf("2: Play Game\n");
	printf("3: Exit\n");
}