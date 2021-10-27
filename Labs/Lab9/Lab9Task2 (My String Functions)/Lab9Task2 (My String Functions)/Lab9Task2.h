/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab9Task2
* Date: October 27, 2021
* Description: This program tests my_strcpy, my_strcat, my_strcmp, and my_strlen.
*/
#ifndef LAB9TASK2_H

#define LAB9TASK2_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int my_strlen(char* str);
int my_strcmp(const char* s1, const char* s2);

char* my_strcpy(char* destination, const char* source);
char* my_strcat(char* destination, const char* source);

#endif