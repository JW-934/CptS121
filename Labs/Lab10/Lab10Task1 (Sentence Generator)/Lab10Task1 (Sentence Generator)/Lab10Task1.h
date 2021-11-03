/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: Lab10Task1
* Date: November 3, 2021
* Description: This program generates random sentences.
*/

#ifndef LAB10TASK1_H

#define LAB10TASK1_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int rand_0_to_4();

void print_rand_sentence(char* article[], char* noun[], char* verb[], char* preposition[]);
#endif