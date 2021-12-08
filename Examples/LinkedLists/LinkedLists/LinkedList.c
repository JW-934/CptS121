#include "LinkedList.h"

Node* make_node(char* item_ptr)
{
	Node* mem_ptr = malloc(sizeof(Node));

	if (mem_ptr != NULL) // Memory was successfully allocated on the heap
	{
		mem_ptr->next_ptr = NULL;
		strcpy(mem_ptr->grocery_item, item_ptr);
	}
	return mem_ptr;
}

int insert_at_front(Node** head_ptr, char* item_ptr) // usually change head ptr name to list_ptr
{
	Node* mem_ptr = make_node(item_ptr);
	int success = 0;

	if (mem_ptr != NULL) // space on heap has been allocated for a node
	{
		success = 1;

		// check if empty list
		if (*head_ptr == NULL)
		{
			//yes it's empty
			*head_ptr = mem_ptr;
		}
		else
		{
			// not empty
			mem_ptr->next_ptr = *head_ptr;
			*head_ptr = mem_ptr;
		}
	}
	return success;
}

// Insert items in alphabetical order
int insert_in_order(Node** list_ptr, char* item_ptr)
{
	Node* mem_ptr = make_node(item_ptr), *prev_ptr = NULL, *curr_ptr = *list_ptr; // *list_ptr gets first node in list
	int success = 0;

	if (mem_ptr != NULL) // make_node (malloc) was successful
	{
		success = 1;

		while (curr_ptr != NULL && strcmp(item_ptr, curr_ptr->grocery_item) > 0) // could also use recursion, item_ptr is new item, using short circuit eval here
		{																		 // program would break if second evaluation done while null
			// moving the pointers through the list
			prev_ptr = curr_ptr;
			curr_ptr = curr_ptr->next_ptr; // curr_ptr could be null if list empty or at end of list (added curr_ptr condition to while)
		}
		// found place to insert item
		mem_ptr->next_ptr = mem_ptr;
		if (prev_ptr != NULL)
		{
			//After the first node or at the end of the list
			//mem_ptr->next_ptr = curr_ptr; // in both cases so "factor it out"
			prev_ptr->next_ptr = mem_ptr;
		}
		else // inserting at front or inserting into an empty list (prev_ptr == NULL)
		{
			//mem_ptr->next_ptr = curr_ptr; // or *list_ptr // in both cases so "factor it out"
			*list_ptr = mem_ptr;
		}
	}
	return success;
}

void print_list(Node* head_ptr)
{
	Node* cur_ptr = head_ptr;

	while (cur_ptr != NULL)
	{
		printf("--> %s ", cur_ptr->grocery_item);
		cur_ptr = cur_ptr->next_ptr;
	}
	printf("-->\n");
}