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