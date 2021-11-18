/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab12Task1
* Date: November 17, 2021
* Description: This program accepts a maze (array) and lists any path through.
*/

#include "maze.h"

int main(void)
{
	char maze[8][8] = { 
					  { 'X', ' ', 'X' , 'X' , 'X' , 'X' , 'X' , 'X' },
					  { 'X', ' ', 'X' , 'X' , 'X' , 'X' , 'X' , 'X' },
					  { 'X', ' ', ' ' , 'X' , 'X' , 'X' , 'X' , 'X' },
					  { 'X', 'X', ' ' , 'X' , 'X' , 'X' , 'X' , 'X' },
					  { 'X', 'X', ' ' , ' ' , ' ' , ' ' , 'X' , 'X' },
					  { 'X', 'X', 'X' , 'X' , 'X' , ' ' , 'X' , 'X' },
					  { 'X', 'X', 'X' , 'X' , 'X' , ' ' , ' ' , ' ' },
					  { 'X', 'X', 'X' , 'X' , 'X' , 'X' , 'X' , ' ' } 
					  };

	print_maze(maze);

	putchar('\n');

	if (traverse_maze(maze, 0, 1) == 1)
	{
		print_maze(maze);
		printf("Maze completed!\n");
	}
	else
	{
		print_maze(maze);
		printf("No path found!\n");
	}
	return 0;
}