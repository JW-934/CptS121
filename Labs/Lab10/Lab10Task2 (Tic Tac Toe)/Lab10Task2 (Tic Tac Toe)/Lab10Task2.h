/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab10Task2
* Date: November 3, 2021
* Description: This program is a game of tic tac toe.
*/

#ifndef LAB10TASK2_H

#define LAB10TASK2_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void move_prompt(char player, int* row_ptr, int* column_ptr);
void print_board(Cell game_board[3][3]);

typedef struct coordinate
{
	int row;
	int column;
}Coordinate;

typedef struct cell
{
	int occupied;
	char symbol;
	Coordinate location;
}Cell;

typedef struct game_info
{
	int wins;
	int losses;
	int total_games_played;
} Game_info;

#endif