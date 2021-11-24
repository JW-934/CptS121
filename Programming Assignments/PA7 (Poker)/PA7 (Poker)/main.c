/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA7
* Date: November 15, 2021, November 20, 2021, November 24, 2021
* Description: This program is a game of Poker.
*/

#include "poker.h"

int main(void)
{
	srand((unsigned)time(NULL)); /* seed random-number generator */
	
	int option, game_over = 0;

	/* initialize suit array */
	const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	/* initialize face array */
	const char* face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };

	/* initalize deck array */
	int deck[4][13] = { 0 };

	// Initialize hands
	Hand hand1, deal_hand;
	init_hand(&hand1);
	init_hand(&deal_hand);

	do
	{
		printf("**********Welcome to Poker!**********\n");
		
		option = print_and_validate();

		system("cls");

		switch (option)
		{
		case 1: // Display Rules
			//print_rules();
			break;
		case 2: // Play Game
			shuffle(deck);
			deal(deck, face, suit, hand1, 5);
			deal(deck, face, suit, deal_hand, 5);
			putchar('\n');












			if (game_over == 1)
			{
				option = 3;
			}

			break;
		case 3: // Exit
			printf("\nGoodbye.\n");
			break;
		}
	} while (option != 3);
	
	
	
	

	





	return 0;
}

// Example Code Authors: Deitel & Deitel - C How to Program