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
		round = 1, sum = 0, dice_sum, reroll_dice, turn_over = 0, game_over = 0, p1_upper_section = 0, p2_upper_section = 0;
 
	char yes_no;
	
	int* p1_upper_ptr = &p1_upper_section;
	int* p2_upper_ptr = &p2_upper_section;


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

			int result, occurances[] = { 0,0,0,0,0,0 };
			int* occurances_ptr = NULL;
			int* dice_ptr = NULL;

			//printf("%d, %d, %d", occurances_ptr[0], occurances_ptr[1], occurances_ptr[2]);
			//printf("%d, %d, %d", dice_ptr[0], dice_ptr[1], dice_ptr[2]);

			int dice[5];

			while (round < 14)
			{
				// Player 1///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				printf("Player 1, it is your turn. ");
				system("pause");

				d1 = roll_die();
				d2 = roll_die();
				d3 = roll_die();
				d4 = roll_die();
				d5 = roll_die();

				int dice[] = { d1, d2, d3, d4, d5 };
				dice_sum = d1 + d2 + d3 + d4 + d5;
				++p1_rolls;

				display_dice(d1, d2, d3, d4, d5);

				// Populates occurance array
				occurances_ptr = occurance_ary(d1, d2, d3, d4, d5, occurances);
				// Sorts dice array in ascending order
				dice_ptr = bubble_sort(dice, 5);

				while (turn_over == 0)
				{
					if (p1_rolls < 3)
					{
						yes_no = combo_prompt();

						if (yes_no == 'y' || yes_no == 'Y')
						{
							printf("Which one (1-13)?\n");
							printf("1. Sum of 1's        7. Three-of-a-kind\n");
							printf("2. Sum of 2's        8. Four-of-a-kind\n");
							printf("3. Sum of 3's        9. Full house\n");
							printf("4. Sum of 4's        10. Small straight\n");
							printf("5. Sum of 5's        11. Large straight\n");
							printf("6. Sum of 6's        12. Yahtzee\n");
							printf("            13. Chance\n>");
							scanf(" %d", &combination);

							p1_points = apply_combination(combination, p1_points, occurances_ptr, dice_sum, dice_ptr, p1_upper_ptr);
							p1_rolls = 0;
							printf("\nYour turn is now over.\n");

							turn_over = 1;
						}
						else if (yes_no == 'n' || yes_no == 'N')
						{
							printf("How many dice would you like to reroll (1-5)?\n>");
							scanf(" %d", &reroll_dice);

							dice_ptr[0] = 0, dice_ptr[1] = 0, dice_ptr[2] = 0, dice_ptr[3] = 0, dice_ptr[4] = 0;

							for (int i = 0; i <= reroll_dice; ++i)
							{
								dice_ptr[i] = roll_die();
							}

							++p1_rolls;

							d1 = dice_ptr[0], d2 = dice_ptr[1], d3 = dice_ptr[2], d4 = dice_ptr[3], d5 = dice_ptr[4];

							// Populates occurance array
							occurances_ptr = occurance_ary(d1, d2, d3, d4, d5, occurances);
							// Sorts dice array in ascending order
							dice_ptr = bubble_sort(dice_ptr, 5);

						}
					}
					else
					{
						printf("\nYour turn is now over.\n");
						p1_rolls = 0;
						turn_over = 1;
					}
				}
				// Player 2/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				turn_over = 0;

				printf("Player 2, it is your turn. ");
				system("pause");

				d1 = roll_die();
				d2 = roll_die();
				d3 = roll_die();
				d4 = roll_die();
				d5 = roll_die();

				dice[0] = d1, dice[1] = d2, dice[2] = d3, dice[3] = d4, dice[4] = d5;
				dice_sum = d1 + d2 + d3 + d4 + d5;
				++p2_rolls;

				display_dice(d1, d2, d3, d4, d5);

				// Populates occurance array
				occurances_ptr = occurance_ary(d1, d2, d3, d4, d5, occurances);
				// Sorts dice array in ascending order
				dice_ptr = bubble_sort(dice, 5);

				while (turn_over == 0)
				{
					if (p2_rolls < 3)
					{
						yes_no = combo_prompt();

						if (yes_no == 'y' || yes_no == 'Y')
						{
							printf("Which one (1-13)?\n");
							printf("1. Sum of 1's        7. Three-of-a-kind\n");
							printf("2. Sum of 2's        8. Four-of-a-kind\n");
							printf("3. Sum of 3's        9. Full house\n");
							printf("4. Sum of 4's        10. Small straight\n");
							printf("5. Sum of 5's        11. Large straight\n");
							printf("6. Sum of 6's        12. Yahtzee\n");
							printf("            13. Chance\n>");
							scanf(" %d", &combination);

							p2_points = apply_combination(combination, p2_points, occurances_ptr, dice_sum, dice_ptr, p2_upper_ptr);
							printf("\nYour turn is now over.\n");
							p2_rolls = 0;
							++round;
							turn_over = 1;
						}
						else if (yes_no == 'n' || yes_no == 'N')
						{
							printf("How many dice would you like to reroll (1-5)?\n>");
							scanf(" %d", &reroll_dice);

							dice_ptr[0] = 0, dice_ptr[1] = 0, dice_ptr[2] = 0, dice_ptr[3] = 0, dice_ptr[4] = 0;

							for (int i = 0; i <= reroll_dice; ++i)
							{
								dice_ptr[i] = roll_die();
							}

							++p2_rolls;

							d1 = dice_ptr[0], d2 = dice_ptr[1], d3 = dice_ptr[2], d4 = dice_ptr[3], d5 = dice_ptr[4];

							display_dice(d1, d2, d3, d4, d5);

							// Populates occurance array
							occurances_ptr = occurance_ary(d1, d2, d3, d4, d5, occurances);
							// Sorts dice array in ascending order
							dice_ptr = bubble_sort(dice_ptr, 5);

						}
					}
					else
					{
						printf("\nYour turn is now over.\n");
						++round;
						p2_rolls = 0;
						turn_over = 1;
					}
				}

			}//End of round 14 here

			if (*p1_upper_ptr >= 63)
			{
				p1_points += 35;
				printf("\nPlayer 1, you get an extra 35 points for having more than 63 points in the upper section!\n");
			}
			if (*p2_upper_ptr >= 63)
			{
				p2_points += 35;
				printf("\nPlayer 2, you get an extra 35 points for having more than 63 points in the upper section!\n");
			}

			printf("\nPlayer 1's score is %d\n", p1_points);
			printf("\nPlayer 2's score is %d\n", p2_points);
			
			if (p1_points > p2_points)
			{
				printf("\nPlayer 1 wins!\n");
			}
			else if (p1_points < p2_points)
			{
				printf("\nPlayer 2 wins!\n"); 
			}
			else if (p1_points == p2_points)
			{
				printf("\nThis game was a tie!\n");
			}

			break;
		case 3: // Exit
			printf("\nGoodbye.\n");
			break;
		}
	} while (option != 3);
}