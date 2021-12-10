#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc (), free (), calloc (), atoi ()

typedef struct node
{
	// data
	char grocery_item[25]; // 25 bytes
	// next ptr
	struct node* next_ptr; // 4 bytes // self-referential struct
}Node; // 29 bytes

// make_node () allocates a Node on the heap.
// it also intitializes the node with a grocery item string
// and sets the next ptr to NULL. the function returns the address
// of the start of the block of memory (Node) on the heap.
Node* make_node(char* item_ptr);

// list operation
int insert_at_front(Node **head_ptr, char *item_ptr);
// list operation
// order? alphabetical order - dictionary order
int insert_in_order(Node** list_ptr, char* item_ptr);

// list operation
// removing the first item in the list
// precondition: list must not be empty.
char* delete_front(Node** list_ptr, char* return_string);

void print_list(Node* head_ptr);

#endif
