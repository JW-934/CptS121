#include "LinkedList.h"

Node* make_node(char* item_ptr)
{
	Node* mem_ptr = malloc(sizeof(Node));

	mem_ptr->next_ptr = NULL;
	strcpy(mem_ptr->grocery_item, item_ptr);

	return mem_ptr;
}