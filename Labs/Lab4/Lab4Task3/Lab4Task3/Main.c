/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab4Task3
* Date: September 22, 2021
* Description: This program calculates the average, maximum, or minimum of data from a file.
*/

#include "Header.h"

int main(void)
{
	FILE* infile = NULL;
	infile = fopen("Data.txt", "r");
	
	int operation;
	double number1, number2, number3, number4, number5, result;
	
	//Prompt for desired operation
	printf("1: Average\n2: Maximum Value\n3: Minimum Value\n");
	printf("Choose and operation (1, 2, or 3): ");
	scanf("%d", &operation);

	//Reads data from file
	number1 = read_double(infile);
	number2 = read_double(infile);
	number3 = read_double(infile);
	number4 = read_double(infile);
	number5 = read_double(infile);
	
	//Determines which operation to perform
	if (operation == 1)
	{
		result = calculate_average(number1, number2, number3, number4, number5);
	}

	if (operation == 2)
	{
		result = find_max(number1, number2, number3, number4, number5);
	}

	if (operation == 3)
	{
		result = find_min(number1, number2, number3, number4, number5);
	}

	//Displaying result
	if (operation == 1)
	{
		printf("Average: %lf", result);
	}

	if (operation == 2)
	{
		printf("Maximum: %lf", result);
	}

	if (operation == 3)
	{
		printf("Minimum: %lf", result);
	}
	
	fclose(infile);
}