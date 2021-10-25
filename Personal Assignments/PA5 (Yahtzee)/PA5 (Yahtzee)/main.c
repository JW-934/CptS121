/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA5
* Date: October 18, 2021, October 21, 2021, October 23, 2021, October 25, 2021
* Description: This program is Yahtzee.
*/

#include "header.h"

int main(void)
{
	int option, d1, d2, d3, d4, d5, p1_rolls = 0, p2_rolls = 0, p1_points = 0, p2_points = 0, combination,
		round = 1, sum = 0, dice_sum, reroll_dice;
 
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

			dice_sum = d1 + d2 + d3 + d4 + d5;

			++p1_rolls;

			int dice[] = { d1, d2, d3, d4, d5 }, result = 0, occurances[] = { 0,0,0,0,0,0 };

			int* occurances_ptr = NULL;
			int* dice_ptr = NULL;

			// Populates occurance array
			occurances_ptr = occurance_ary(d1, d2, d3, d4, d5, occurances);
			// Sorts dice array in ascending order
			dice_ptr = bubble_sort(dice, 5);

			//printf("%d, %d, %d", occurances_ptr[0], occurances_ptr[1], occurances_ptr[2]);
			//printf("%d, %d, %d", dice_ptr[0], dice_ptr[1], dice_ptr[2]);

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

					// Die sums
					if (combination == 1)
					{
						sum = occurances_ptr[0];
						p1_points = p1_points + sum;
						printf("\nYou have %d ones, you get %d points.\n", occurances_ptr[0], sum);
					}
					if (combination == 2)
					{
						sum = occurances_ptr[1] * 2;
						p1_points = p1_points + sum;
						printf("\nYou have %d twos, you get %d points.\n", occurances_ptr[1], sum);
					}
					if (combination == 3)
					{
						sum = occurances_ptr[2] * 3;
						p1_points = p1_points + sum;
						printf("\nYou have %d threes, you get %d points.\n", occurances_ptr[2], sum);
					}
					if (combination == 4)
					{
						sum = occurances_ptr[3] * 4;
						p1_points = p1_points + sum;
						printf("\nYou have %d fours, you get %d points.\n", occurances_ptr[3], sum);
					}
					if (combination == 5)
					{
						sum = occurances_ptr[4] * 5;
						p1_points = p1_points + sum;
						printf("\nYou have %d fives, you get %d points.\n", occurances_ptr[4], sum);
					}
					if (combination == 6)
					{
						sum = occurances_ptr[5] * 6;
						p1_points = p1_points + sum;
						printf("\nYou have %d sixes, you get %d points.\n", occurances_ptr[5], sum);
					}

					// Three of a kind
					if (combination == 7)
					{
						if (is_3_of_kind(occurances_ptr) == 1)
						{
							p1_points = p1_points + dice_sum;
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
							p1_points = p1_points + dice_sum;
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
							p1_points = p1_points + 25;
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
							p1_points = p1_points + 30;
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
							p1_points = p1_points + 40;
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
							p1_points = p1_points + 50;
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
						p1_points = p1_points + dice_sum;
						printf("\nYou get %d points.\n", dice_sum);
					}




				}
				else if (yes_no == 'n' || yes_no == 'N')///////////////////////////////////////////////////////////////
				{
					printf("How many dice would you like to reroll (1-5)?\n>");
					scanf(" %d", &reroll_dice);


				}
			}
			break;
		case 3: // Exit
			printf("\nGoodbye.\n");
			break;
		}
	} while (option != 3);
}