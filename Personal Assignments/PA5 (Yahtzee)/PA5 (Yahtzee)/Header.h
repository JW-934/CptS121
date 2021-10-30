/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA5
* Date: October 18, 2021, October 21, 2021, October 23, 2021, October 25, 2021, October 29, 2021
* Description: This program is Yahtzee.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h> //rand() and srand()
#include <time.h> //time()

void main_menu();
void print_rules();
void display_dice(int die1, int die2, int die3, int die4, int die5);

int* occurance_ary(int d1, int d2, int d3, int d4, int d5, int *occurances);
int* bubble_sort(int list[], int size);

int roll_die();
int get_option();
int print_and_validate();
int is_3_of_kind(int* occurances);
int is_4_of_kind(int* occurances);
int is_pair(int* occurances);
int is_full_house(int* dice);
int is_yahtzee(int* occurances);
int is_small_straight(int* dice);
int is_large_straight(int* dice);
int apply_combination(int combination, int points, int* occurances_ptr, int dice_sum, int* dice_ptr, int* upper_ptr);

char combo_prompt();