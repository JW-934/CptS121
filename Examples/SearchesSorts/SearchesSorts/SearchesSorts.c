#include "SearchesSorts.h"

int sequential_search(int list[], int size, int target, int* target_index_ptr)
{
	int index = 0, found = 0;

	*target_index_ptr = -1; // invalid index so a good choice for a default value

	for (index = 0, found = 0; index < size && !found; ++index)
	{
		if (target == list[index]) // No else needed bc ++index is in the update expression
		{
			found = 1;
			*target_index_ptr = index; // Changes the value in the address contained in the pointer, if there was no star it would modify the ptr itself
		}
	}

	return found;
}

int binary_search(int list[], int size, int target, int* target_index_ptr)
{
	int left_ind = 0, right_ind = size - 1, mid_ind = -1, found = 0;

	*target_index_ptr = -1; // invalid index

	for (; !found && left_ind <= right_ind; ) // Initialization expression blank bc var already declared, !found means while found != 1?
	{ // No need for update expression, all done in if/else statements
		mid_ind = (left_ind + right_ind) / 2;

		if (target == list[mid_ind])
		{
			// Found the target in the list
			found = 1;
			*target_index_ptr = mid_ind;
		}
		else if (target < list[mid_ind])
		{
			right_ind = mid_ind - 1;
		}
		else
		{
			left_ind = mid_ind + 1;
		}
	
		return found;
	
	
	
	
	
	}
}

// ascending order placement of numbers in array.
//

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

int* selection_sort(int list[], int size)
{
	int max_index = 0, index = 0, temp = 0, passes = 1;

	while (passes < size) // controls number of passes
	{
		index = 1;
		max_index = 0;

		while (index <= size - passes) // walking through the array
		{
			// trying to find max
			if (list[max_index] < list[index])
			{
				// found a new max
				max_index = index;
			}

			++index;
		} // end of inner loop

		//swap
		temp = list[max_index];
		list[max_index] = list[size - passes];
	} // end of outer loop
}