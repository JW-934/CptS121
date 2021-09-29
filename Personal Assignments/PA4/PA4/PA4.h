/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA4
* Date: September 29, 2021
* Description: This program is a game of craps.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void print_game_rules();
double get_game_balance();
double get_wager_amount();
int check_wager_amount(double wager, double balance);
