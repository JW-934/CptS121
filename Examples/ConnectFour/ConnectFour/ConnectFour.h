#ifndef CONNECT_FOUR_H

#define CONNECT_FOUR_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_ROWS 6
#define MAX_COLS 7

typedef enum token_color
{
	NONE, RED, BLACK							// Only two possible values, first value automatically set to 0, then 1 ...
}Token_color;

typedef enum occupied
{
	NO, YES
}Occupied;

typedef struct coordinate
{
	int row;
	int col;
}Coordinate;

typedef struct cell
{
	Token_color token;					// Type: Token_color, Name: token
	Coordinate position;
	Occupied yes_no;
}Cell;

typedef struct board
{
	Cell game_board[MAX_ROWS][MAX_COLS];
}Board;

#endif