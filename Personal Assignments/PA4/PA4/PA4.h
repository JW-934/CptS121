/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA4
* Date: September 29, 2021, October 1, 2021, October 4, 2021, October 11, 2021, October 12, 2021
* Description: This program is a game of craps.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h> //rand() and srand()
#include <time.h> //time()

#define DISPLAY_RULES 1
#define SET_BALANCE 2
#define PLAY_GAME 3
#define EXIT 4

void main_menu();
void print_game_rules();
void display_dice(int die1, int die2);
void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance);

double get_game_balance();
double get_wager_amount();
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract);

int print_and_validate();
int get_option();
int check_wager_amount(double wager, double balance);
int roll_die();
int calculate_sum_dice(int die1_value, int die2_value);
int is_win_loss_or_point(int sum_dice);
int is_point_loss_or_neither(int sum_dice, int point_value);