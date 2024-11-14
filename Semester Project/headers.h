/*
 * headers.h
 *
 *  Created on: May 3, 2023
 *      Author: hasinae
 */

#ifndef HEADERS_H_
#define HEADERS_H_

#include "ADT.hpp"

// menu prototypes
void menu();
void menuOp();
void allCode();
int getNum();
bool checkValidChoice(int);

// pet list prototypes
void petList();
void selectNum();
CustomPet petInfo();

// play area prototypes
void play();
string playKittens();
string playPuppies();
string playBunnies();
string playHamsters();
void playArea();
void playGround();
void feed();
void feed2();
void feed3();
void pet();
void pet2();
void pet3();
void affection();

// living condition prototypes
void livingCond();

// repeat menu prototype
void repeatMenu();

// adopting page prototype
void adoptRand();
int petRand(int&);
void adopt();
void adoptPrice();

// how long
void howLong();
void merge(float [], int, int, int);
void mergeSort(float [], int, int);
void printDates(float [], int);

// extra prototypes
void display(char, int);






#endif /* HEADERS_H_ */
