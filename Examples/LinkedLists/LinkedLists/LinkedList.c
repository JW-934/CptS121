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