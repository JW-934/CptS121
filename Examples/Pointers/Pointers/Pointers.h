#ifndef POINTERS_H
#define POINTERS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//n1 and n2 are input parameters
//result and remainder pointers are output parameters
void divide (int n1, int n2, int* result_ptr, int* rem_ptr);
void roll_dice(int *die1_ptr, int *die2_ptr); //returning multiple values


#endif
