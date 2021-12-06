/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA8
* Date: December 3, 2021, December 5, 2021
* Description: This program consists of numerous interview question functions.
*/

#include "PA8.h"

int binary_search(int list[], int target, int items)
{
	int left_ind = 1, right_ind = items, found = 0, target_index = -1, mid = -1;

	while (found == 0 && left_ind <= right_ind)
	{
		mid = (left_ind + right_ind) / 2;
		if (list[mid] == target)
		{
			found = 1;
			target_index = mid;
		}
		if (target < list[mid])
		{
			right_ind = mid - 1;
		}
		if (target > list[mid])
		{
			left_ind = mid + 1;
		}
	}
	return target_index;
}

int is_palindrome(char* str, int length) //Recursive
{

}

int sum_primes(unsigned int n) //Recursive
{

}

char* my_str_n_cat(char* dest, char* src, int n)
{
	int dest_length = 0, dest_index, src_length = 0, src_index = 0;

	// Finds length of dest to locate index of the end of it
	for (int i = 0; *(dest + i) != '\0'; ++i)
	{
		dest_length += 1;
	}
	dest_index = dest_length;
	for (int j = 0; j < n; ++j)
	{
		*(dest + dest_index) = *(src + src_index);
		++src_index;
		++dest_index;
	}
	return dest;
}

void bubble_sort(char* array[], int num_strs)
{

}