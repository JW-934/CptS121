/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab9Task2
* Date: October 27, 2021
* Description: This program tests my_strcpy, my_strcat, my_strcmp, and my_strlen.
*/

#include "Lab9Task2.h"

// Counts elements in string
int my_strlen(char* str)
{
	int length = 0; 
	for (int i = 0; str[i] != '\0'; ++i)
	{
		length += 1;
	}
	return length;
}

// Compares elements in strings
int my_strcmp(const char* s1, const char* s2)
{
	int length1, length2;
	length1 = my_strlen(s1);
	length2 = my_strlen(s2);

	if (s1[0] < s2[0]) //s1 before s2
	{
		return -1;
	}
	else if (s1[0] > s2[0])// s1 after s2
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < length1; ++i) // Checks if all chars are identical
		{
			if (s1[i] < s2[i]) //s1 before s2
			{
				return -1;
			}
			else if (s1[i] > s2[i])// s1 after s2
			{
				return 1;
			}
		}
		return 0;
	}
}

// Copies the elements of one string onto another
char* my_strcpy(char* destination, const char* source)
{
	int i = 0;
	int src_length = my_strlen(source);
	int dest_length = my_strlen(destination);

	for (; i < src_length; ++i)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';
	//++i;
	return destination;
}

// Adds one string to the end of another
char* my_strcat(char* destination, const char* source)
{
	int dest_length = my_strlen(destination);
	int src_length = my_strlen(source);
	int i = dest_length, k = 0; // set to index right after last character

	//destination[i] = 'i';

	//puts(destination);

	//destination[i] = source[k];

	for (; source[i] != '\0'; ++i)
	{
		destination[i] = source[k];
		++k;
		if (source[i] == ' ')
		{
			++i;
		}
	}
	//destination[i] = "\0";
	return destination;
}