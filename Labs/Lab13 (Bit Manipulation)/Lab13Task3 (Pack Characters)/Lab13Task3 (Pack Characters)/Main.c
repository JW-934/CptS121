/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab13Task3
* Date: December 1, 2021
* Description: This program packs 4 characters into an unsigned int variable.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_chars(char* c1, char* c2, char* c3, char* c4);

// Prompts user for 4 chars and assigns them to associated variables
void get_chars(char* c1, char* c2, char* c3, char* c4)
{
	printf("Enter 4 characters (1 2 3 4): ");
	scanf("%c %c %c %c", c1, c2, c3, c4);
}

int main(void)
{
	unsigned int variable;
	char c1, c2, c3, c4;

	get_chars(&c1, &c2, &c3, &c4);
	//printf("%c %c %c %c", c1, c2, c3, c4);

	variable = c1;

	variable = variable << 8;
	variable = variable | c2;

	variable = variable << 8;
	variable = variable | c3;

	variable = variable << 8;
	variable = variable | c4;

	return 0;
}
