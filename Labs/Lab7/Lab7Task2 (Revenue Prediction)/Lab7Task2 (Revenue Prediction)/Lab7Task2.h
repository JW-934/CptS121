/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab7Task2
* Date: October 13, 2021
* Description: This program predicts when revenue will equal/exceed $1 Trillion
*				and generates a table with estimated revenues for every year from 
*				1984 to when revenue >= $1 Trillion
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double calc_revenue(int years_since_1984);

int predict_year(int target_revenue);