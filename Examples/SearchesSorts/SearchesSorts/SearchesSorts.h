//#ifndef SEARCHES_AND_SORTS_H
//#define SEARCHES_AND_SORTS_H
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int sequential_search(int list[], int size, int target, int* target_index_ptr);
//
//// Precondition: number list must be in ascending order (small to large)
//int binary_search(int list[], int size, int target, int* target_index_ptr);
//
//int* bubble_sort(int list[], int size);
//
//int* selection_sort(int list[], int size);
//#endif

#ifndef SEARCHES_AND_SORTS_H
#define SEARCHES_AND_SORTS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int sequential_search(int list[], int size, int target,
	int* target_index_ptr);

// precondition: list must be in ascending or smallest to largest
// order
int binary_search(int list[], int size, int target,
	int* target_index_ptr);

// ascending order
int* bubble_sort(int list[], int size);
int* selection_sort(int list[], int size);

#endif