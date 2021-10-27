#ifndef SEARCHES_AND_SORTS_H
#define SEARCHES_AND_SORTS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX_ROWS 3
#define MAX_COLS 5

int sequential_search(int list[], int size, int target,
	int* target_index_ptr);

// precondition: list must be in ascending or smallest to largest
// order
int binary_search(int list[], int size, int target,
	int* target_index_ptr);

// ascending order
int* bubble_sort(int list[], int size);
int* selection_sort(int list[], int size);

void init_2D_array(char lists[][MAX_COLS], int num_rows,
	int num_cols);

// will be similar to the actual strcat () in <string.h>
char* my_strcat(char* dest_ptr, const char* src_ptr);

// will be similar to the actual strcat () in <string.h>
char* my_strcat_ptr_arithmetic(char* dest_ptr, const char* src_ptr);


#endif