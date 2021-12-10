#include "LinkedList.h"


// we'll add error checking to make_node () on Friday, 12/3

// make_node () allocates a Node on the heap.
// it also intitializes the node with a grocery item string
// and sets the next ptr to NULL. the function returns the address
// of the start of the block of memory (Node) on the heap.
Node* make_node(char* item_ptr)
{
	// allocates 29 bytes of memory for a Node on the heap
	Node* mem_ptr = malloc(sizeof(Node)); 

	if (mem_ptr != NULL) // memory was allocated succesfully on the heap
	{
		// the next_ptr is really the "link" between nodes
		mem_ptr->next_ptr = NULL; // set the next_ptr to NULL
		// copy the grocery item into the Node that will go
		// into the linked list
		strcpy(mem_ptr->grocery_item, item_ptr);
	}

	return mem_ptr; // return the address of the start of the Node on the heap
}


// list operation
int insert_at_front(Node** head_ptr, char* item_ptr)
{
	Node* mem_ptr = make_node(item_ptr);
	int success = 0;

	if (mem_ptr != NULL) // we allocated space on heap for a Node
	{
		success = 1;

		// check if empty list
		if (*head_ptr == NULL)
		{
			// yes, it's empty
			*head_ptr = mem_ptr;
		}
		else
		{
			// it's not empty
			mem_ptr->next_ptr = *head_ptr;
			*head_ptr = mem_ptr;
		}
	}

	return success;
}

// order? alphabetical order - dictionary order
int insert_in_order(Node** list_ptr, char* item_ptr)
{
	Node* mem_ptr = make_node(item_ptr), *prev_ptr = NULL,
		*cur_ptr = *list_ptr; // set to first node in list
	int success = 0;

	if (mem_ptr != NULL)
	{
		// we successfully allocated space for a Node.
		// we should be able to insert into our list
		success = 1;

		while ((cur_ptr != NULL) && 
			strcmp(item_ptr, cur_ptr->grocery_item) > 0) // short-circuit evaluation
		{
			// find the correct spot in the list to insert	
			prev_ptr = cur_ptr;
			cur_ptr = cur_ptr->next_ptr;
		}

		// we know we're positioned correctly in the list to insert
		// the new item

		mem_ptr->next_ptr = cur_ptr;
		if (prev_ptr != NULL)
		{
			// inserting after the first node or at the 
			// end of the list
			//mem_ptr->next_ptr = cur_ptr;
			prev_ptr->next_ptr = mem_ptr;
		}
		else // prev_ptr == NULL
		{
			// inserting at front or inserting into an empty list
			//mem_ptr->next_ptr = cur_ptr; // *list_ptr
			*list_ptr = mem_ptr;
		}
		//mem_ptr->next_ptr = cur_ptr;
	}

	return success;
}

// list operation
// removing the first item in the list
// precondition: list must not be empty.
char* delete_front(Node** list_ptr, char *return_string)
{
	Node* temp_ptr = *list_ptr;
	//char return_string[25] = "";//(*list_ptr)->grocery_item;
	*list_ptr = (*list_ptr)->next_ptr;
	strcpy(return_string, temp_ptr->grocery_item);
	free(temp_ptr);
	//free(*list_ptr)

	return return_string;
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