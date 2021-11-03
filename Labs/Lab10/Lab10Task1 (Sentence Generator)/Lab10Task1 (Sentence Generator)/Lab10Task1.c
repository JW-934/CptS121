/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab10Task1
* Date: November 3, 2021
* Description: This program generates random sentences.
*/

#include "Lab10Task1.h"

int rand_0_to_4()
{
	return rand() % 5;
}

void print_rand_sentence(char* article[], char* noun[], char* verb[], char* preposition[])
{
	char sentence[100] = "";

	char* curr_word = NULL;

	//char* sen_ptr = sentence;

	curr_word = article[rand_0_to_4()];
	
	//curr_word[0] = toupper(curr_word[0]);

	strcat(sentence, curr_word);
	strcat(sentence, " ");
	
	sentence[0] = toupper(sentence[0]);
	
	curr_word = noun[rand_0_to_4()];
	strcat(sentence, curr_word);
	strcat(sentence, " ");
	curr_word = verb[rand_0_to_4()];
	strcat(sentence, curr_word);
	strcat(sentence, " ");
	curr_word = preposition[rand_0_to_4()];
	strcat(sentence, curr_word);
	strcat(sentence, " ");
	curr_word = article[rand_0_to_4()];
	strcat(sentence, curr_word);
	strcat(sentence, " ");
	curr_word = noun[rand_0_to_4()];
	strcat(sentence, curr_word);
	strcat(sentence, "!");

	printf("%s\n", sentence);
	
	//printf("%s ", word1);
	///*printf("%s ", noun[rand_0_to_4()]);
	//printf("%s ", verb[rand_0_to_4()]);
	//printf("%s ", preposition[rand_0_to_4()]);
	//printf("%s ", article[rand_0_to_4()]);
	//printf("%s!", noun[rand_0_to_4()]);*/
}