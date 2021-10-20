/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab8Task3
* Date: October 20, 2021
* Description: This program is a game of hangman.
*/

#include "Header.h"

int main(void)
{
	char guessed[15] = {'*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}, word[15], guess;
	int word_length, inc_guesses = 0, cor_guesses = 0, win_loss = 0;

	printf("Enter the word to be guessed: ");
	gets(word);

	printf("Enter the length of the word: ");
	scanf("%d", &word_length);

	system("cls");

	while (win_loss == 0)
	{
		for (int i = 0; i < 15 && win_loss == 0; ++i)
		{
			printf("Enter a letter to guess: ");
			scanf(" %c", &guess);
			
			if (guess == word[0] || guess == word[1] || guess == word[2] || guess == word[3] || guess == word[4] || guess == word[5] || guess == word[6] || guess == word[7] || guess == word[8] || guess == word[9] || guess == word[10] || guess == word[11] || guess == word[12] || guess == word[13] || guess == word[14])
			{
				cor_guesses = cor_guesses + 1;
				printf("\nYou're right! The word contains a %c.\n", guess);
			}
			else
			{
				inc_guesses = inc_guesses + 1;
				printf("\nYou're wrong! The word does not contain a %c.\n", guess);
			}
			if (cor_guesses == word_length)
			{
				printf("You win!");
				win_loss = 1;
			}
			if (inc_guesses == 6)
			{
				printf("You lose!");
				win_loss = -1;
			}
		}
	}
}