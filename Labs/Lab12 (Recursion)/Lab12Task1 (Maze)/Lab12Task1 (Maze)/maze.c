/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task1
* Date: November 17, 2021
* Description: This program accepts a maze (array) and lists any path through.
*/

#include "maze.h"

int traverse_maze(char maze[8][8], int row_ind, int col_ind)
{
	maze[row_ind][col_ind] = '*';

	if (row_ind == 7 && col_ind == 7)
	{
		return 1;
	}
	if (maze[row_ind + 1][col_ind] == ' ' && row_ind + 1 < 8)
	{
		if (traverse_maze(maze, row_ind + 1, col_ind) == 1)
		{
			return 1;
		}
	}
	if (maze[row_ind - 1][col_ind] == ' ' && row_ind - 1 >= 0)
	{
		if (traverse_maze(maze, row_ind - 1, col_ind) == 1)
		{
			return 1;
		}
	}
	if (maze[row_ind][col_ind + 1] == ' ' && col_ind + 1 < 8)
	{
		if (traverse_maze(maze, row_ind, col_ind + 1) == 1)
		{
			return 1;
		}
	}
	if (maze[row_ind][col_ind - 1] == ' ' && col_ind - 1 >= 0)
	{
		if (traverse_maze(maze, row_ind, col_ind - 1) == 1)
		{
			return 1;
		}
	}

	return 0;
}

void print_maze(char maze[8][8])
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			printf("%c ", maze[i][j]);
		}
		putchar('\n');
	}
}