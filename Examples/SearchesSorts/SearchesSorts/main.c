// We are practicing with arrays.

// History: 10/11 - Implemented sequential_search (). Sequential
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

int main(void)
{
	int numbers[10] = {10, 1, 5, 7}, found = 0, target_index = 0; // indexes 4-9 set to 0

	found = sequential_search(&numbers[0], 4, 7, &target_index); // array names are pointers
	found = sequential_search(&numbers[0], 4, 13, &target_index);

	return 0;
}