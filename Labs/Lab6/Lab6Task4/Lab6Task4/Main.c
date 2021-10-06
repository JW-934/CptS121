/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab6Task4
* Date: October 6, 2021
* Description: This program generates a random number
*			   between -100 to 100 and requires that the
*			   user guesses which number was generated.
*/

#include "L6T4.h"

int main(void)
{
	int number, guess, guess_count = 0;
	
	srand((unsigned int)time(NULL));

	number = gen_random();

	//printf("number: %d", number);
	
	do
	{
		printf("Enter your guess between -100 and 100: ");
		scanf("%d", &guess);
		
		if (guess > 100 || guess < -100)
		{
			printf("Your guess must be between -100 and 100, try again.\n");
		}
		else if(guess > number)
		{
			printf("\nYour guess is too high, try again.\n");
		}
		else if(guess < number)
		{
			printf("\nYour guess is too low, try again.\n");
		}
		guess_count += 1;
		//printf("\nGuesses: %d\n", guess_count);
	} while (guess != number);
	printf("\nYou are right! The number was %d!", number);
}