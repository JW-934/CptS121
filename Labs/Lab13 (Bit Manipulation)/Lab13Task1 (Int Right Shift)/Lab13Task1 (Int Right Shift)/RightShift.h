/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab13Task1
* Date: December 1, 2021
* Description: This program shifts integer variables to the right by 4 bits.
*/

#ifndef RIGHTSHIFT_H

#define RIGHTSHIFT_H
#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

int right_shift_by_4(int number);

void rec_print_last_int_bits(int number);
void print_int_as_bits(int number);
#endif
