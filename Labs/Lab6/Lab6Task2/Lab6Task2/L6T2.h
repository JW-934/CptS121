/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab6Task2
* Date: October 6, 2021
* Description: This program determines the factorial 
*			   of n, represented n!, where n is entered by the user.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int get_int();
int calc_factorial(int number);

void check_for_special_values(int number);
void print_factorial(int number, int factorial);