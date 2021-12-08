#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc (), free (), calloc ()

typedef struct node
{
	//char* grocery_ites; // Would allocate enough memory for a pointer not a string
	char grocery_item[25]; // 25 bytes
	struct node* next_ptr; // 4 bytes // link
}Node; // Requires 29 bytes

Node* make_node(char* item_ptr);
	
// list operation
int insert_at_front(Node **head_ptr, char *item_ptr);
int insert_in_order(Node** list_ptr, char* item_ptr);

// list operation
// removing first item in the list
// precondition: list must not be empty

char* delete_front(Node** list_ptr, char* return_string);

void print_list(Node *head_ptr); // single star because not changing list

#endif
