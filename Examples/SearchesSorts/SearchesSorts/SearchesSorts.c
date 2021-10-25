#include "SearchesSorts.h"

int sequential_search(int list[], int size, int target,
	int* target_index_ptr)
{
	int index = 0, found = 0;

* target_index_ptr = -1; // invalid index

for (index = 0, found = 0; index < size && !found; ++index)
{
	if (target == list[index])
	{
		found = 1;
		*target_index_ptr = index;
	}
}

return found;
}

// precondition: list must be in ascending or smallest to largest
// order
int binary_search(int list[], int size, int target,
	int* target_index_ptr)
{
	int left_index = 0, right_index = size - 1, mid_index = -1,
		found = 0;

	*target_index_ptr = -1; // invalid index

	for (; !found && left_index <= right_index;)
	{
		mid_index = (left_index + right_index) / 2;

		if (target == list[mid_index])
		{
			// we found the target
			found = 1;
			*target_index_ptr = mid_index;
		}
		else if (target < list[mid_index])
		{
			// target has to be to the left of the value
			// found at the mid_index;
			// target is less than the current value
			// found at the mid_index
			right_index = mid_index - 1;
		}
		else
		{
			// target has to be to the right of the value
			// found at the mid_index
			// target is greater than the current value
			// found at the mid_index
			left_index = mid_index + 1;
		}
	}

	return found;
}

// ascending order placement of numbers in array.
int* bubble_sort(int list[], int size)
{
	int temp = 0, passes = 0, index = 0;

	// recall we need to make size - 1 passes
	// through the array to guarantee all numbers
	// are in the correct order.
	for (; passes < size - 1; ++passes) // number of passes through array controlled by the outer loop
	{
		for (index = 0; index < size - passes - 1;
			++index) // swapping - walking through the array controlled by inner loop
		{
			// check to see if number at index
			// is greater than its right adjacent cell.
			if (list[index] > list[index + 1])
			{
				// we need to swap
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}
	}

	return list; // return a pointer to the ordered array
}

// ascending order placement of numbers in array.
int* selection_sort(int list[], int size)
{
	int index = 0, temp = 0, max_index = 0,
		passes = 1;

	// passes = 1
	while (passes < size) // controls number of passes
	{
		max_index = 0; // assuming max is at index 0 always
		index = 1; // because of above assumption
		while (index <= size - passes) // walking thru the array
		{
			if (list[max_index] < list[index])
			{
				// found a new max
				max_index = index;
			}

			++index; // go to the next element in the array
		}

		// swap - recall we only perform
		// a swap once we've made a complete
		// pass through the array. that's
		// different than what bubble sort does.
		// bubble sort makes swaps while it's
		// traversing the array.
		temp = list[max_index];
		list[max_index] = list[size - passes];
		list[size - passes] = temp;

		++passes;
	}

	return list; // return a pointer to the sorted array
}

void init_2D_array(char lists[][MAX_COLS], int num_rows,
	int num_cols)
{
	int row_index = 0, col_index = 0;

	for (; row_index < num_rows; ++row_index) // determine which row we're in
	{
		for (col_index = 0; col_index < num_cols;
			++col_index) // determine which column we're in
		{
			lists[row_index][col_index] = '\0';
		}
	}
}

char* my_strcat(char* dest_ptr, const char* src_ptr)
{
	int src_index = 0, dest_index = 0;

	// loop to find end of destination string
	for (; dest_ptr[dest_index] != '\0'; ++dest_index); // semicolon here because no body, all work done by conditional expression

	// appending of characters from src to dest
	for (; src_ptr[src_index] != '\0'; ++src_index, ++dest_index) // looking for the null character of the source string (also can have multiple updates)
	{
		dest_ptr[dest_index] = src_ptr[src_index]; // not off by one, starting at null char of the dest string
	}
	dest_ptr[dest_index] = '\0'; // Loop stops when it sees the \0

	return dest_ptr;
}