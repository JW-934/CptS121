/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA7
* Date: November 15, 2021, November 20, 2021
* Description: This program is a game of Poker.
*/

#ifndef POKER_H

#define POKER_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct card
{
	int face_ind;
	int suit_ind;
}Card;

typedef struct hand
{
	Card cards[5];
}Hand;

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]);







#endif
