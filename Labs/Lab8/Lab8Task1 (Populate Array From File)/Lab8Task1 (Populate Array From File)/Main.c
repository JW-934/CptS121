/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab8Task1
* Date: October 20, 2021
* Description: This program populates an array with integers from a file then reverses the items.
*/

#include "Header.h"

int main(void)
{
	FILE* infile = NULL;
	infile = fopen("Input.txt", "r");

	int eof = 0, num, numbers = 0, i = 0, k, temp;

	int list[20]; // This program has a max of 20 values because I couldn't figure out how to 
				  // initialize an array with a variable size.
	
	/*int number;
	fscanf(infile, "%d", &number);
	printf("%d", number);*/

	// Read values and populate array
	while (eof == 0)
	{
		if (fscanf(infile, "%d", &num) != EOF)
		{
			++numbers; // I wanted to use this numbers variable to set the size of the array
			list[i] = num;
			++i;
		}
		else
		{
			eof = 1;
		}
		//printf("%d", numbers);
	}
	fclose(infile);
	printf("%d", list[0]);
	printf("%d", list[1]);
	printf("%d", list[2]);
	printf("%d", list[3]);
	printf("%d", list[4]);
	printf("%d\n", list[5]);

	// Reverses the values in the array
	k = numbers - 1; // Set to position of last value in array

	for (int j = 0; j < numbers; ++j)
	{
		temp = list[j];
		
		list[j] = list[k];
		list[k] = temp;

		--k;
	}
	printf("%d", list[0]);	// The debugger shows that the array is reversed at this point but 
	printf("%d", list[1]);	// these print statements still show the original order.
	printf("%d", list[2]);
	printf("%d", list[3]);
	printf("%d", list[4]);
	printf("%d\n", list[5]);
}