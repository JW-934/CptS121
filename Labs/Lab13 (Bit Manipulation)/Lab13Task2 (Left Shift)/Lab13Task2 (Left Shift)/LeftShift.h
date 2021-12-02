/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab13Task2
* Date: December 1, 2021
* Description: This program shifts integer variables to the left.
*/

#ifndef LEFTSHIFT_H

#define LEFTSHIFT_H
#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

int power2(unsigned int number, unsigned int pow);

void rec_print_last_int_bits(unsigned int number);
void print_int_as_bits(unsigned int number);

#endif
