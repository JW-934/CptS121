/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task1
* Date: November 17, 2021
* Description: This program accepts a maze (array) and lists any path through.
*/

#ifndef MAZE_H

#define MAZE_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

int traverse_maze(char maze[8][8], int row_ind, int col_ind);

void print_maze(char maze[8][8]);

#endif
