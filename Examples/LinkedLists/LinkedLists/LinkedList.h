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
	

#endif
