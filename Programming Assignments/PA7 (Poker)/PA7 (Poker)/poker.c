/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA7
* Date: November 15, 2021, November 20, 2021, November 24, 2021, November 29, 2021
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

// Deal the needed number of cards
void deal(int wDeck[][13], const char* wFace[], const char* wSuit[], Hand hand, int num_cards)
{
	int row = 0;    /* row number */
	int column = 0; /*column number */
	int card = 0;   /* card counter */
	int cards_dealt = 0;

	do
	{
		for (card = 1; card <= 52; card++)
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
						//printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t');

						wDeck[row][column] = -1; // Marked as dealt

						hand.cards[cards_dealt] = info_to_Card(wFace[column], wSuit[row]);
						++cards_dealt;
					}
				}
			}
		}
	} while (cards_dealt < num_cards);
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
		(*hand).cards[i].num_ind = -1;
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

// Prints all cards in hand
void print_hand(Hand* hand)
{
	printf("Your hand:\n\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%s of %s\n", (*hand).cards[i].num_str, (*hand).cards[i].suit_str);
	}
	putchar('\n');
}

// Asks user which cards to replace then replaces them with drawn cards
void replace_cards(Hand* hand, int wDeck[][13], const char* wFace[], const char* wSuit[])
{
	int num_cards = -1, count = 0;
	char unused;
	char* face1[9], suit1[9], face2[9], suit2[9], face3[9], suit3[9], face4[9], suit4[9], face5[9], suit5[9];

	do
	{
		printf("How many cards would you like to redraw?\nMake your selection: ");
		scanf("%d", &num_cards);
	} while (num_cards < 0 || num_cards > 5);

	if (num_cards > 0 && num_cards < 5)
	{
		printf("\nEnter first card to redraw (Face of Suit): ");
		scanf("%s %c%c %s", face1, &unused, &unused, suit1);
	}
	if (num_cards > 1 && num_cards < 5)
	{
		printf("\nEnter second card to redraw (Face of Suit): ");
		scanf("%s %c%c %s", face2, &unused, &unused, suit2);
	}
	if (num_cards > 2 && num_cards < 5)
	{
		printf("\nEnter third card to redraw (Face of Suit): ");
		scanf("%s %c%c %s", face3, &unused, &unused, suit3);
	}
	if (num_cards > 3 && num_cards < 5)
	{
		printf("\nEnter fourth card to redraw (Face of Suit): ");
		scanf("%s %c%c %s", face4, &unused, &unused, suit4);
	}
	if (num_cards == 5)
	{
		*face1 = (*hand).cards[1].num_str;
		*suit1 = (*hand).cards[1].suit_str;
		*face2 = (*hand).cards[1].num_str;
		*suit2 = (*hand).cards[1].suit_str;
		*face3 = (*hand).cards[1].num_str;
		*suit3 = (*hand).cards[1].suit_str;
		*face4 = (*hand).cards[1].num_str;
		*suit4 = (*hand).cards[1].suit_str;
		*face5 = (*hand).cards[1].num_str;
		*suit5 = (*hand).cards[1].suit_str;
	}
}

// Takes card info and converts it into a Card
Card info_to_Card(char* num, char* suit)
{
	Card card;

	card.num_str = num;

	if (num == "Ace") 
		card.num_ind = 1;
	else if (num == "Deuce") 
		card.num_ind = 2;
	else if (num == "Three") 
		card.num_ind = 3;
	else if (num == "Four") 
		card.num_ind = 4;
	else if (num == "Five") 
		card.num_ind = 5;
	else if (num == "Six") 
		card.num_ind = 6;
	else if (num == "Seven") 
		card.num_ind = 7;
	else if (num == "Eight") 
		card.num_ind = 8;
	else if (num == "Nine") 
		card.num_ind = 9;
	else if (num == "Ten") 
		card.num_ind = 10;
	else if (num == "Jack") 
		card.num_ind = 11;
	else if (num == "Queen") 
		card.num_ind = 12;
	else if (num == "King") 
		card.num_ind = 13;

	card.suit_str = suit;
	card.suit_ind = suit[0];

	return card;
}

// Finds undealt card and returns it as a Card 
Card unused_card(int wDeck[][13], const char* wFace[], const char* wSuit[]) {
	int row = 0;    /* row number */
	int column = 0; /*column number */
	int card = 0;   /* card counter */

					/* deal each of the 52 cards */
	for (card = 1; card <= 52; card++) {
		/* loop through rows of wDeck */
		for (row = 0; row <= 3; row++) {
			/* loop through columns of wDeck for current row */
			for (column = 0; column <= 12; column++) {
				/* if slot contains current card, display card */
				if (wDeck[row][column] == card && wDeck[row][column] != -1) {
					wDeck[row][column] = -1;
					return info_to_Card(wFace[column], wSuit[row]);
				}
			}
		}
	}
}