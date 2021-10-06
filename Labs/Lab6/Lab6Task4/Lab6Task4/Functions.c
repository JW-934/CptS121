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

int gen_random()
{
	return (rand() % (100 + 100 + 1)) - 100;  // I used this site to configure the bounds: https://www.geeksforgeeks.org/generating-random-number-range-c/
}