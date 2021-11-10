/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA6
* Date: October 29, 2021, November 3, 2021, November 4, 2021, November 8, 2021
* Description: This program is a game of Battleship.
*/
#ifndef PA6_H

#define PA6_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int select_who_starts();
int is_winner(int p1_ships, int p2_ships);
int generate_direction();

void welcome_screen();
void init_board(char board[][MAX_COLS], int num_rows, int num_cols);
void print_board(char board[][MAX_COLS], int num_rows, int num_cols, int player);
void manually_place_ships(char board[][MAX_COLS]);
void randomly_place_ships(char board[][MAX_COLS]);
void generate_start_point(int* row_ptr, int* col_ptr, int ship_length);

#endif