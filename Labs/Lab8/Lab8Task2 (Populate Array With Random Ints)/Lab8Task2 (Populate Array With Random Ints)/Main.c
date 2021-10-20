/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab8Task2
* Date: October 20, 2021
* Description: This program populates an array with random ints from 1-100
*			   and counts how many times each number occurs.
*/

#include "Header.h"

int main(void)
{
	srand((unsigned int)time(NULL));
	
	int list[20], occurances[101], num;

	// Populates list with 20 ints from 1-100 and counts each occurance
	for (int i = 0; i < 20; i++)
	{
		num = (rand() % (100 - 1 + 1)) + 1;
		list[i] = num;
		
		if (occurances[num] < 1)
		{
			occurances[num] = 1;
		}
		else
		{
			occurances[num] = occurances[num] + 1;
		}
	}
}