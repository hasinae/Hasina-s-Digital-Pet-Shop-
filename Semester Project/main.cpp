/*
 * main.cpp
 *
 *  Created on: May 2, 2023
 *      Author: hasinae
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <queue>

#include "headers.h"

using namespace std;

/*
 * the goal of this project is to create a cute pet shop that allows a user to adopt a pet.
 * the user has the choice to customize a pet, including fur color and name
 *
 */

int main()
{
	cout << "WELCOME!\n";
	cout << "Welcome to Hasina's Digital Pet Shop >ﻌ<\n";
	cout << "Take your time in choosing a pet to adopt :) \n";
	cout <<	"The pet you choose will be one that you take home forever so choose wisely!\n\n";
	cout <<			"  ___________ %%&%" << endl;
	cout << 		" / |Pet Shop|&&%%&%" << endl;
	cout <<    	   "/..|___/^|___|%&%%&&" << endl;
	cout <<    	   "|  | []   [] |%|Y&%'" << endl;
	cout <<    	   "|  |   .-.   | ||  " << endl;
	cout <<	     "@._|@@_|||_@@|~||~~~~~~" << endl;
	cout << endl;

	menuOp();
}

void menuOp()
{
	int choice = 0;
	do
	{
		menu();

		choice = getNum();
		if (checkValidChoice(choice) == false)
		{
			cout << "ERROR! Invalid menu option, please try again!! ₍ᐢ ̥ ̞ ̥ᐢ₎ ♥ \n\n";
			continue;
		}

		switch(choice)
		{
			case 1:
			{
				petList();
				break;
			}
			case 2:
			{
				play();
				break;
			}
			case 3:
			{
				livingCond();
				break;
			}
			case 4:
			{
				adoptRand();
				break;
			}
			case 5:
			{
				break;
			}
		}
	} while (choice != 5);

	// terminate
	cout << "Thanks for visiting Hasina's Digital Pet Shop >ﻌ<\n";
}
