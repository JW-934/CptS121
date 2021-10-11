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