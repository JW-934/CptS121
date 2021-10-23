/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA5
* Date: October 18, 2021, October 21, 2021, October 23, 2021
* Description: This program is Yahtzee.
*/

#include "header.h"

int main(void)
{
	int option, d1, d2, d3, d4, d5, p1_rolls = 0, p2_rolls = 0, p1_points = 0, p2_points = 0, combination,
		round = 1, sum = 0;
 
	char yes_no;
	
	srand((unsigned int)time(NULL));

	printf("**********Welcome to Yahtzee**********\n");

	do
	{
		option = print_and_validate();

		system("cls");

		switch (option)
		{
		case 1: // Display Rules
			print_rules();
			break;
		case 2: // Play Game
			
			// Player 1
			printf("Player 1, it is your turn. ");
			system("pause");

			d1 = roll_die();
			d2 = roll_die();
			d3 = roll_die();
			d4 = roll_die();
			d5 = roll_die();

			++p1_rolls;

			display_dice(d1, d2, d3, d4, d5);

			// Prompt for combination
			if (p1_rolls < 3)
			{
				printf("\nWould you like to use this roll for one of the following combinations (y/n)?\n");
				printf("1. Sum of 1's        7. Three-of-a-kind\n");
				printf("2. Sum of 2's        8. Four-of-a-kind\n");
				printf("3. Sum of 3's        9. Full house\n");
				printf("4. Sum of 4's        10. Small straight\n");
				printf("5. Sum of 5's        11. Large straight\n");
				printf("6. Sum of 6's        12. Yahtzee\n");
				printf("            13. Chance\n");
				printf(">");
				scanf(" %c", &yes_no);
				if (yes_no == 'y' || yes_no == 'Y')
				{
					printf("Which one (1-13)? >");
					scanf(" %d", &combination);

					int dice[] = { d1, d2, d3, d4, d5 }, result = 0;

					int* occurances_ptr = NULL;

					*occurances_ptr = occurances_ary(d1, d2, d3, d4, d5);

					// Count the occurances of each number in the roll (Populates occurances[])
					/*for (int i = 0; i < 5; ++i)
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
					}*/

					// Die sums
					if (combination == 1)
					{
						sum = occurances_ptr[0];
					}
					if (combination == 2)
					{
						sum = occurances_ptr[1] * 2;
					}
					if (combination == 3)
					{
						sum = occurances_ptr[2] * 3;
					}
					if (combination == 4)
					{
						sum = occurances_ptr[3] * 4;
					}
					if (combination == 5)
					{
						sum = occurances_ptr[4] * 5;
					}
					if (combination == 6)
					{
						sum = occurances_ptr[5] * 6;
					}
					
					printf("%d", sum);

					// Three of a kind
					if (combination == 7)
					{
						
					}
					
					// Four of a kind
					if (combination == 8)
					{

					}
					
					// Full house
					if (combination == 9)
					{

					}
					
					// Small straight
					if (combination == 10)
					{

					}
					
					// Large straight
					if (combination == 11)
					{

					}
					
					// Yahtzee
					if (combination == 12)
					{

					}
					
					// Chance
					if (combination == 13)
					{

					}




				}
			}
			break;
		case 3: // Exit
			printf("\nGoodbye.\n");
			break;
		}
	} while (option != 3);
}