/*
* Programmer: Jesse Watson
* Class: CptS 121, Fall 2021; Lab Section 7
* Programming Assignment: PA7
* Date: November 15, 2021, November 20, 2021, November 24, 2021, November 29, 2021
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
	int num_ind;
	int suit_ind;
	char* num_str;
	char* suit_str;
}Card;

typedef struct hand
{
	Card cards[5];
}Hand;

int print_and_validate();
int get_option();

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[], Hand hand, int num_cards);
void print_rules();
void init_hand(Hand* hand);
void main_menu();
void print_hand(Hand* hand);
void replace_cards(Hand* hand, int wDeck[][13], const char* wFace[], const char* wSuit[]);

Card info_to_Card(char* num, char* suit);
Card unused_card(int wDeck[][13], const char* wFace[], const char* wSuit[]);

#endif
