/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA6
* Date: October 29, 2021, November 3, 2021, November 4, 2021, November 8, 2021, November 9, 2021, November 11, 2021
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
int check_if_occupied(int direction, int length, int row_start, int col_start, char board[][MAX_COLS]);
int check_shot_and_update(int row, int column, char target_board[][MAX_COLS], char tar_shown_board[][MAX_COLS]);

void welcome_screen();
void init_board(char board[][MAX_COLS], int num_rows, int num_cols);
void print_board(char board[][MAX_COLS], int num_rows, int num_cols, int player);
void manually_place_ships(char board[][MAX_COLS]);
void randomly_place_ships(char board[][MAX_COLS], int length, char ship_type);
void generate_start_point(int* row_ptr, int* col_ptr, int length, int direction);
void random_coordinates(int* row, int* col);
void p1_turn(char p2_board[][MAX_COLS], char p2_shown_board[][MAX_COLS], FILE* outfile, int* d2_hits, int* s2_hits, int* r2_hits, int* b2_hits, int* c2_hits);
void p2_turn(char p1_board[][MAX_COLS], FILE* outfile, char placeholder[][MAX_COLS], int* d1_hits, int* s1_hits, int* r1_hits, int* b1_hits, int* c1_hits);
void add_ship_hit(char type, int* d_hits, int* s_hits, int* r_hits, int* b_hits, int* c_hits);
void check_if_sunk(int player, int* d_hits, int* s_hits, int* r_hits, int* b_hits, int* c_hits, int* player_ships, FILE* outfile);

#endif