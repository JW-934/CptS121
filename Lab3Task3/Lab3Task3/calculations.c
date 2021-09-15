/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab3Task3
* Date: September 15, 2021
* Description: This program prompts the user for exam, lab, and project scores then
*			   calculates the weighted average.
*/

#include "Header.h"

double get_score()
{
	double score = 0;

	printf("Enter score: ");
	scanf("%lf", &score);

	return score;
}

double calculate_average(double score1, double score2)
{
	double avg = 0;

	avg = (score1 + score2) / 2.0;

	return avg;
}