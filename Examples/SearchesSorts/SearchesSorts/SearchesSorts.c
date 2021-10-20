//#include "SearchesSorts.h"
//
//int sequential_search(int list[], int size, int target, int* target_index_ptr)
//{
//	int index = 0, found = 0;
//
//	*target_index_ptr = -1; // invalid index so a good choice for a default value
//
//	for (index = 0, found = 0; index < size && !found; ++index)
//	{
//		if (target == list[index]) // No else needed bc ++index is in the update expression
//		{
//			found = 1;
//			*target_index_ptr = index; // Changes the value in the address contained in the pointer, if there was no star it would modify the ptr itself
//		}
//	}
//
//	return found;
//}
//
//int binary_search(int list[], int size, int target, int* target_index_ptr)
//{
//	int left_ind = 0, right_ind = size - 1, mid_ind = -1, found = 0;
//
//	*target_index_ptr = -1; // invalid index
//
//	for (; !found && left_ind <= right_ind; ) // Initialization expression blank bc var already declared, !found means while found != 1?
//	{ // No need for update expression, all done in if/else statements
//		mid_ind = (left_ind + right_ind) / 2;
//
//		if (target == list[mid_ind])
//		{
//			// Found the target in the list
//			found = 1;
//			*target_index_ptr = mid_ind;
//		}
//		else if (target < list[mid_ind])
//		{
//			right_ind = mid_ind - 1;
//		}
//		else
//		{
//			left_ind = mid_ind + 1;
//		}
//	
//		return found;
//	
//	
//	
//	
//	
//	}
//}
//
//// ascending order placement of numbers in array.
////
//
//int* bubble_sort(int list[], int size)
//{
//	int temp = 0, passes = 0, index = 0;
//
//	// recall we need to make size - 1 passes
//	// through the array to guarantee all numbers
//	// are in the correct order.
//	for (; passes < size - 1; ++passes) // number of passes through array controlled by the outer loop
//	{
//		for (index = 0; index < size - passes - 1;
//			++index) // swapping - walking through the array controlled by inner loop
//		{
//			// check to see if number at index
//			// is greater than its right adjacent cell.
//			if (list[index] > list[index + 1])
//			{
//				// we need to swap
//				temp = list[index];
//				list[index] = list[index + 1];
//				list[index + 1] = temp;
//			}
//		}
//	}
//
//	return list; // return a pointer to the ordered array
//}
//
//int* selection_sort(int list[], int size)
//{
//	int max_index = 0, index = 0, temp = 0, passes = 1;
//
//	while (passes < size) // controls number of passes
//	{
//		index = 1;
//		max_index = 0;
//
//		while (index <= size - passes) // walking through the array
//		{
//			// trying to find max
//			if (list[max_index] < list[index])
//			{
//				// found a new max
//				max_index = index;
//			}
//
//			++index;
//		} // end of inner loop
//
//		//swap
//		temp = list[max_index];
//		list[max_index] = list[size - passes];
//	} // end of outer loop
//}


// We are practicing with arrays.

// History: 10/20 - We started discussing strings. We
//                  discussed and implemented 3 different
//                  ways of implementing strings. We
//                  also looked into boundary issues
//                  with strings and various stdio functions
//                  that allow for us to read strings
//                  from the keyboard and write strings
//                  to the display. Introduced <string.h>.
//                  Briefly discovered how to copy
//                  strings using strcpy ().
//          10/18 - Discussed an implemented the
//                  selection sort algorithm. We 
//                  also discussed constant pointers
//                  and how they're similar to the
//                  context of what the name of an array
//                  represents!
//          10/15 - Discussed potential arrays required
//                  for PA 5. Discussed and implemented
//                  the bubble sort algorithm.
//          10/13 - Implemented binary_search (). Recall
//                  binary search requires that items
//                  it searches are in order. In our
//                  version we implemented a solution
//                  expecting numbers to be in ascending
//                  order.
//          10/11 - Implemented sequential_search (). Sequential
//                  search navigates an array or list and 
//                  looks for a specific target value in the
//                  array. If it finds the target, then
//                  our version returns 1 for yes, we found it;
//                  0 otherwise. Our version also returns the
//                  index at which we found the target via
//                  an output parameter or pointer. We started
//                  discussing another algorith called binary
//                  search.
#include "SearchesSorts.h"

int sequential_search(int list[], int size, int target,
	int* target_index_ptr)
{
	int index = 0, found = 0;

	*target_index_ptr = -1; // invalid index

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



