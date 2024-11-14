/*
 * functions.cpp
 *
 *  Created on: May 3, 2023
 *      Author: hasinae
 */


#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <queue>

#include "headers.h"


using namespace std;

// global variables
int userNum = 0;
int choice = 0;
string key;
string again;
string back;
int affec1 = 20;
int affec2 = 50;
int affec3 = 70;
int counter = 50;


void menu()
{
	cout << "Welcome to the Main Menu at Hasina's Digital Pet Shop!!\n";
	cout << "\t1. Browse Pets for Adoption at Hasina's Digital Pet Shop ₍⸍⸌̣ʷ̣̫⸍̣⸌₎♡ \n";
	cout << "\t2. Go to Play Area  ₍ᐢ ̥ ̞ ̥ᐢ₎ ♥ \n";
	cout << "\t3. See best living conditions for the Pets for Adoption at Hasina's Digital Pet Shop ʕ♡˙ᴥ˙♡ʔ \n";
	cout << "\t4. Adoption Page  ♡(ᐢ ᴥ ᐢし)\n";
	cout << "\t5. Exit the digital Pet Shop ʕꈍᴥꈍʔﾉ♡ \n";
}


int getNum()
{
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    return num;
}


bool checkValidChoice(int userChoice)
{
	if (userChoice >= 1 && userChoice <= 5)
	{
		return true; // valid
	}
	else
	{
		return false; // invalid
	}
}


void petList()
{
	string animalChoice;

	display('*', 100);

    // declare priority queue
    priority_queue<int> priorityQueue;

    // enqueue elements
    priorityQueue.push(3);
    priorityQueue.push(2);
    priorityQueue.push(1);
    priorityQueue.push(4);
    priorityQueue.push(6);
    priorityQueue.push(5);


    // check if the queue is empty
    bool empty = priorityQueue.empty();
    if (empty)
    {
        cout << "The queue is empty. Welcome in!" << endl;
    }
    else
    {
    	cout << "OOPS! You've been placed in a queue. Please wait a few minutes for your turn :) \n";

    	for (int i = 0; i < 3; i++)
    	{
    		cout << "☾⋆｡ﾟ☁︎｡⏲⏲⏲ ｡☁ﾟ｡⋆☽\n";
    	}
    }

    string enter;
    // length of the queue
    int length = priorityQueue.size();
    cout << "There are " << length << " people infront of you. It's almost your turn!" << endl;

    // dequeue
    cout << "\ndequeuing.....\n";
    while (!(priorityQueue.empty()))
    {
        int element = priorityQueue.top();
        priorityQueue.pop();
        cout << element << "...";
    }
    cout << "  :)";
    cout << endl;
    cout << "Awesome! It's your turn now, welcome in!! :D\n\n";


	cout << "Welcome to the Pet List at Hasina's Digital Pet Shop!!\n";
	cout << "We host 4 different types of pets at our pet shop. We are home to Kittens, Puppies, Bunnies, and Hamsters!\n";
	cout << "Please choose one of the following to browse:\n";
	cout << "\tKittens\n";
	cout << "\tPuppies\n";
	cout << "\tBunnies\n";
	cout << "\tHamsters\n";

	cout << "Your pet selection: ";
	cin >> animalChoice;

	if(animalChoice == "Kittens" || animalChoice == "kittens" || animalChoice == "Kitten" || animalChoice == "kitten")
	{
		cout << "₍⸍⸌̣ʷ̣̫⸍̣⸌₎♡\n";
		cout << "Now that you have chosen a pet, you have the option to customize the pet to your discretion :)\n";
		cout << "Since our shop is busy...there is a select number of pets with certain breeds. Hasina's Digital Pet Shop\n";
		cout << "unfortunately does not house all breeds of your selected pet \n";
		cout << "With that being said, select the breed for your kitten :D\n";
		cout << "\t1. Tabby Kitten\n";
		cout << "\t2. Siamese Kitten\n";
		cout << "\t3. Persian Kitten\n";
		selectNum();

		// displaying customized pet info
		CustomPet userPet = petInfo();
	}
	else if(animalChoice == "Puppies" || animalChoice == "puppies" || animalChoice == "Puppy" || animalChoice == "puppy")
	{
		cout << "♡(ᐢ ᴥ ᐢし)\n";
		cout << "You have chosen a Puppy!\n";
		cout << "Now that you have chosen a pet, you have the option to customize the pet to your discretion :)\n";
		cout << "Since our shop is busy...there is a select number of pets with certain breeds. Hasina's Digital Pet Shop\n";
		cout << "unfortunately does not house all breeds of your selected pet \n";
		cout << "With that being said, select the breed for your puppy :D\n";
		cout << "\t1. Pomeranian Puppy\n";
		cout << "\t2. Golden Retriever Puppy\n";
		cout << "\t3. French Bullpet Puppy\n";
		selectNum();

		// displaying customized pet info
		CustomPet userPet = petInfo();
	}
	else if(animalChoice == "Bunnies" || animalChoice == "bunnies" || animalChoice == "Bunny" || animalChoice == "bunny")
	{
		cout << "₍ᐢ ̥ ̞ ̥ᐢ₎ ♥\n";
		cout << "You have chosen a Bunny!\n";
		cout << "Now that you have chosen a pe t, you have the option to customize the pet to your discretion :)\n";
		cout << "Since our shop is busy...there is a select number of pets with certain breeds. Hasina's Digital Pet Shop\n";
		cout << "unfortunately does not house all breeds of your selected pet \n";
		cout << "With that being said, select the breed for your bunny :D\n";
		cout << "\t1. Lionhead Bunny\n";
		cout << "\t2. Dutch Bunny\n";
		cout << "\t3. Flemish Giant Bunny\n";
		selectNum();

		// displaying customized pet info
		CustomPet userPet = petInfo();
	}
	else if(animalChoice == "Hamsters" || animalChoice == "hamsters" || animalChoice == "Hamster" || animalChoice == "hamster")
	{
		cout << "ʕ♡˙ᴥ˙♡ʔ \n";
		cout << "You have chosen a Hamster!\n";
		cout << "Now that you have chosen a pet, you have the option to customize the pet to your discretion :)\n";
		cout << "Since our shop is busy...there is a select number of pets with certain breeds. Hasina's Digital Pet Shop\n";
		cout << "unfortunately does not house all breeds of your selected pet \n";
		cout << "With that being said, select the breed for your hamster :D\n";
		cout << "\t1. Syrian Hamster\n";
		cout << "\t2. Chinese Hamster\n";
		cout << "\t3. Dwarf Winter White Russian Hamster\n";
		selectNum();

		// displaying customized pet info
		CustomPet userPet = petInfo();
	}
	else
	{
		cout << "You have entered a pet that we do not house :( Sorry and try again!\n";
		petList();
	}
	cout << endl;
}


void selectNum()
{
	cout << "Your selection: ";
//	cin.ignore();
    cin >> userNum;
    cout << endl;
}


CustomPet petInfo()
{
	// CustomPet struct
	CustomPet userPet;

	// user pet customization
	cout << "Enter your pet's fur color: ";
	cin.ignore();
	getline(cin, userPet.furColor);
	cout << "Enter your pet's name: ";
	getline(cin, userPet.name);
	cout << endl;

	// print pet info
	cout << "Your pet's fur color: " << userPet.furColor << endl;
	cout << "Your pet's name: " << userPet.name << endl << endl;

	cout << "Your pet's name length is " << userPet.name.length() << " characters long.\n";

	string playAns;
	cout << endl;
	cout << "Would you like to play with your pet? Or would you like to adopt your pet? \n";
	cout << "Enter 'play' to play with you pet, or 'adopt' to adopt your pet, otherwise 'no' to return to main menu: ";
	getline(cin, playAns);

	if (playAns == "Play" || playAns == "play")
	{
		playArea();
	}
	else if (playAns == "Adopt" || playAns == "adopt")
	{
		adopt();
	}
	else
	{
		string menuConfirm;
		cout << "Returning back to menu...Confirm by typing 'Confirm'. To go to the Play Area, type 'Play Area': ";
		getline(cin, menuConfirm);

		if(menuConfirm == "Confirm" || menuConfirm == "confirm")
		{
			cout << endl;
			menuOp();
		}
		else if(menuConfirm == "Play Area" || menuConfirm == "play area")
		{
			cout << "Ok, redirecting you to the Play Area at Hasina's Digital Pet Shop!\n";
			playArea();
		}
	}
}


void play()
{
	cout << endl;
	display('*', 100);
	cout << "Welcome to the Play Area at Hasina's Digital Pet Shop!!\n";
	cout << "Here at the play area, you are able to choose one of the pets for adoption and play around with them.\n";
	cout << "Choose a pet from the list below to play with!\n";
	cout << "\t1. Play with Kittens\n";
	cout << "\t2. Play with Puppies\n";
	cout << "\t3. Play with Bunnies\n";
	cout << "\t4. Play with Hamsters\n";
	cout << "Enter you choice: ";
	cin >> choice;

	switch(choice)
	{
		case 1:
		{
			playKittens();
			break;
		}
		case 2:
		{
			playPuppies();
			break;
		}
		case 3:
		{
			playBunnies();
			break;
		}
		case 4:
		{
			playHamsters();
			break;
		}
		case 5:
		{
			break;
		}
	} while (choice != 5);

	cout << "Incorrect selection, try again\n";
	play();
}

string playKittens()
{
	string randKitt;
	display('*', 100);

	cout << "Welcome to the Kitten Play Area! ₍⸍⸌̣ʷ̣̫⸍̣⸌₎♡\n";
	cout << "We only have surprise kittens to play around with at the Kitten Play Area. \n";
	cout << "Would you like to play with a surprise kitten? ";
	cin.ignore();
	getline(cin, randKitt);
	if(randKitt == "Yes" || randKitt == "yes")
	{
		int kittNum = 0;

		cout << "Pick a number between 1 through 3: ";
		cin >> kittNum;
		if (kittNum == 1)
		{
			cout << endl;
			cout << "A Tabby Kitten has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (kittNum == 2)
		{
			cout << endl;
			cout << "A Siamese Kitten has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (kittNum == 3)
		{
			cout << endl;
			cout << "A Persian Kitten has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
	}
	else
	{
		cout << "Returning to Main Menu...\n\n";
		menuOp();
	}
	return randKitt;
}

string playPuppies()
{
	string randPupp;
	display('*', 100);

	cout << "Welcome to the Puppy Play Area! ♡(ᐢ ᴥ ᐢし)\n";
	cout << "We only have surprise puppies to play around with at the Puppy Play Area. \n";
	cout << "Would you like to play with a surprise puppy? ";
	cin.ignore();
	getline(cin, randPupp);
	if(randPupp == "Yes" || randPupp == "yes")
	{
		int puppNum = 0;

		cout << "Pick a number between 1 through 3: ";
		cin >> puppNum;
		if (puppNum == 1)
		{
			cout << endl;
			cout << "A Pomeranian Puppy has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (puppNum == 2)
		{
			cout << endl;
			cout << "A Golden Retriever Puppy has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (puppNum == 3)
		{
			cout << endl;
			cout << "A French Bullpet Puppy has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
	}
	else
	{
		cout << "Returning to Main Menu...\n\n";
		menuOp();
	}
	return randPupp;
}


string playBunnies()
{
	string randBun;
	display('*', 100);

	cout << "Welcome to the Bunny Play Area! ₍ᐢ ̥ ̞ ̥ᐢ₎ ♥\n";
	cout << "We only have surprise bunnies to play around with at the Bunny Play Area. \n";
	cout << "Would you like to play with a surprise bunny? ";
	cin.ignore();
	getline(cin, randBun);
	if(randBun == "Yes" || randBun == "yes")
	{
		int bunNum = 0;

		cout << "Pick a number between 1 through 3: ";
		cin >> bunNum;
		if (bunNum == 1)
		{
			cout << endl;
			cout << "A Lionhead Bunny has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (bunNum == 2)
		{
			cout << endl;
			cout << "A Dutch Bunny has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (bunNum == 3)
		{
			cout << endl;
			cout << "A Flemish Giant Bunny has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
	}
	else
	{
		cout << "Returning to Main Menu...\n\n";
		menuOp();
	}
	return randBun;
}


string playHamsters()
{
	string randHams;
	display('*', 100);

	cout << "Welcome to the Hamster Play Area! ʕ♡˙ᴥ˙♡ʔ \n";
	cout << "We only have surprise hamsters to play around with at the Hamster Play Area. \n";
	cout << "Would you like to play with a surprise hamster? ";
	cin.ignore();
	getline(cin, randHams);
	if(randHams == "Yes" || randHams == "yes")
	{
		int hamsNum = 0;

		cout << "Pick a number between 1 through 3: ";
		cin >> hamsNum;
		if (hamsNum == 1)
		{
			cout << endl;
			cout << "A Syrian Hamster has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (hamsNum == 2)
		{
			cout << endl;
			cout << "A Chinese Hamster has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
		else if (hamsNum == 3)
		{
			cout << endl;
			cout << "A Dwarf Winter White Russian Hamster has spawned!\n";
			cout << "Heading to the Play Area in 3...2...1...\n";
			playArea();
		}
	}
	else
	{
		cout << "Returning to Main Menu...";
		cout << "To play with a pet that fits your tastes, head over to option 1, where you can browse and customize a pet to your liking. \n";
		cout << "Afterwards, you may play with you customized pet in the Play Area!\n";
		menuOp();
	}
	return randHams;
}


void playArea()
{
	cout << endl;
	display('*', 100);
	cout << "Welcome to the Play Ground where you can play with your selected pet! ♡(ᐢ ᴥ ᐢし)\n";
	cout << "In the Play Ground, you have the option to feed, pet, or play around with your selected pet!\n\n";
	cout << "Let's move onto the Play Ground area!\n\n";
	cout << "Now Entering the Play Ground...\n";
	cout << "Welcome to the Play Ground at Hasina's Digital Pet Shop!!\n";
	cout << "Select what you would like to do at the Play Area: \n";
	cout << "\t1. Feed your pet\n";
	cout << "\t2. Pet your pet\n";
	cout << "\t3. Return to Main Menu\n";
	selectNum();

	switch(choice)
			{
				case 1:
				{
					feed();
					break;
				}
				case 2:
				{
					pet();
					break;
				}
				case 3:
				{
					menuOp();
					break;
				}
		} while (choice != 4);

		cout << "Incorrect selection, try again\n";
		playArea();
}


void feed()
{
	display('*', 100);
	cout << "Welcome to the feed page where you have the chance to feed your chosen pet! ( ˘▽˘)っ♨\n";

	affection();
	cout << "Type 'feed' to feed your pet once: ";
	cin >> key;

	if (key == "Feed" || key == "feed")
	{
		cout << endl;
		cout << "You have fed your pet!\n";

		cout << "Affection Percentage: " << affec1 << "%\n";

		cout << "Would you like to feed your pet again? ";
		cin.ignore();
		getline(cin, again);
		if (again == "Yes" || again == "yes")
		{
			feed2();
		}
		else
		{
			cout << "Returning to Play Ground Menu...\n\n";
			playArea();
		}
	}
	else
	{
		cout << "You have entered the wrong selection, try again.\n";
		cout << endl;
		feed();
	}
}


void feed2()
{
	cout << endl;
	display('*', 100);
	cout << "Welcome to the feed page where you have the chance to feed your chosen pet! ( ˘▽˘)っ♨\n";

	cout << "Type 'feed' to feed your pet once: ";
	cin >> key;

	string help;
	if (key == "Feed" || key == "feed")
	{
		cout << endl;
		cout << "You have fed your pet!\n";

		srand(time(0));
		int randNum = 1 + rand() % (2 - 1 + 1);
		if (randNum == 2)
		{
			cout << "Uh oh...Your pet has pooped! Enter 'Help' to get help from a worker: ";
			cin.ignore();
			getline(cin, help);
			if (help == "Help" || help == "help")
			{
				cout << endl;
				cout << "Hello, my name is Cindy. I am the head manager at Hasina's Digital Pet Shop! You requested some help...?\n";
				cout << "Oh nevermind, I see that your animal has pooped haha. Don't worry I'll take care of it for you :)\n";
				cout << "Cleaning the poop...Area all cleaned!\n";
				cout << "All done...Have fun with your pet!\n";
				feed2();
			}
		}

		cout << "Affection Percentage: " << affec2 << "%\n";

		cout << "Would you like to feed your pet again? ";
		cin.ignore();
		getline(cin, again);
		if (again == "Yes" || again == "yes")
		{
			feed3();
		}
		else
		{
			cout << "Returning to Play Ground Menu...\n\n";
			playArea();

		}
	}
	else
	{
		cout << "You have entered the wrong selection, try again.\n";
		cout << endl;
		feed2();
	}
}


void feed3()
{
	cout << endl;
	display('*', 100);
	cout << "Welcome to the feed page where you have the chance to feed your chosen pet! ( ˘▽˘)っ♨\n";

	cout << "Type 'feed' to feed your pet once: ";
	cin >> key;


	if (key == "Feed" || key == "feed")
	{
		cout << endl;
		cout << "You have fed your pet!\n";

		cout << "Affection Percentage: " << affec3 << "%\n\n";

		cout << "You have reached the needed affection percentage to adopt your pet!\n";
		cout << "Would you like to adopt your pet or would you like to head back to the Play Ground now? \n";
		cout << "Please enter 'Adopt' to adopt your pet, or 'Play Ground' to go back to the Play Ground: ";
		cin.ignore();
		getline(cin, back);

		if (back == "Adopt" || back == "adopt")
		{
			cout << "Heading to Adoption Page...\n\n";
			adopt();
		}
		else if (back == "Play Ground" || back == "play ground")
		{
			cout << "Returning to Play Ground Menu...\n\n";
			playArea();
		}
	}
	else
	{
		cout << "You have entered the wrong selection, try again.\n";
		cout << endl;
		feed3();
	}
}


void pet()
{
	display('*', 100);
	cout << "Welcome to the petting page where you have the chance to pet your chosen pet! ♡\n";

	affection();
	cout << "Type 'pet' to pet your pet once: ";
	cin >> key;


	if (key == "Pet" || key == "pet")
	{
		cout << endl;
		cout << "You have pet your pet!\n";
		cout << "Your pet feels happy that you are petting them <3\n";

		cout << "Affection Percentage: " << affec1 << "%\n";

		cout << "Would you like to pet your pet again? ";
		cin.ignore();
		getline(cin, again);
		if (again == "Yes" || again == "yes")
		{
			pet2();
		}
		else
		{
			cout << "Returning to Play Ground Menu...\n\n";
			playArea();
		}
	}
	else
	{
		cout << "You have entered the wrong selection, try again.\n";
		cout << endl;
		pet();
	}
}


void pet2()
{
	cout << endl;
	display('*', 100);
	cout << "Welcome to the petting page where you have the chance to pet your chosen pet! ♡\n";

	cout << "Type 'pet' to pet your pet once: ";
	cin >> key;


	if (key == "Pet" || key == "pet")
	{
		cout << endl;
		cout << "You have pet your pet!\n";

		cout << "Affection Percentage: " << affec2 << "%\n";

		cout << "Would you like to pet your pet again? ";
		cin.ignore();
		getline(cin, again);
		if (again == "Yes" || again == "yes")
		{
			pet3();
		}
		else
		{
			cout << "Returning to Play Ground Menu...\n\n";
			playArea();
		}
	}
	else
	{
		cout << "You have entered the wrong selection, try again.\n";
		cout << endl;
		pet2();
	}
}


void pet3()
{
	display('*', 100);
	cout << "Welcome to the petting page where you have the chance to pet your chosen pet! ♡\n";

	cout << "Type 'pet' to pet your pet once: ";
	cin >> key;


	if (key == "Pet" || key == "pet")
	{
		cout << endl;
		cout << "You have pet your pet!\n";

		cout << "Affection Percentage: " << affec3 << "%\n\n";

		cout << "You have reached the needed affection percentage to adopt your pet!\n";
		cout << "Would you like to adopt your pet or would you like to head back to the Play Ground now?\n";
		cout << "Please enter 'Adopt' to adopt your pet, or 'Play Ground' to go back to the Play Ground: ";
		cin.ignore();
		getline(cin, back);

		if (back == "Adopt" || back == "adopt")
		{
			cout << "Heading to Adoption Page...\n";
			adopt();
		}
		else if (back == "Play Ground" || back == "play ground")
		{
			cout << "Returning to Play Ground Menu...\n\n";
			playArea();
		}
	}
	else
	{
		cout << "You have entered the wrong selection, try again.\n";
		cout << endl;
		pet3();
	}
}


void affection()
{
	display('*', 100);
	cout << "In order to ensure that the compatibility between you and your pet is the best, \n";
	cout << "Hasina's Digital Pet Shop has created an affection bar. The affection bar will show your progress in becoming close with your pet.\n";
	cout << "You can become close with your pet by either feeding them or petting them!\n";
	cout << "The more you play with your pet, the more they like you, which increases the chance of a perfect adoption!!!\n";
	cout << "In order to adopt your chosen pet, you will need to acquire at least 60% of affection points in the affection bar.\n";
	cout << "The bar starts at 10%, and increased 20% when you either feed or pet with your pet!\n";
	cout << "You can only acquire an affection percentage in one of these categories listed above, not all combinded. \n";
	cout << "Happy playing ₍⸍⸌̣ʷ̣̫⸍̣⸌₎♡ \n\n";
	display('*', 100);
}


void livingCond()
{
	display('*', 100);
	cout << "Welcome to the Living Conditions Page at Hasina's Digital Pet Shop!! ʕ♡˙ᴥ˙♡ʔ \n";
	cout << "Here at the Living Conditions Page, you are able to choose one of the pets to discover set living conditions about your desired pet.\n";
	cout << "Choose a pet from the list below to learn more about!\n";
	cout << "\t1. Learn about Kittens\n";
	cout << "\t2. Learn about Puppies\n";
	cout << "\t3. Learn about Bunnies\n";
	cout << "\t4. Learn about Hamsters\n";
	cout << "Enter you choice: ";
	cin >> choice;

	string livingPet;

	if (choice == 1)
	{
		display('*', 100);
		cout << "Welcome to the kitten page! ₍⸍⸌̣ʷ̣̫⸍̣⸌₎♡ \n";
		cout << "Kittens enjoy comfortable, dry, clean, and quiet places to rest. Kittens need to use the toiler easily, so keep a litter box close!\n";
		cout << "Loud noises and big objects scare kittens and cats so be careful with your home environment!\n\n";

		cout << "Are you ready to adopt a random pet, or would you like to see the living conditions for other pets? \n";
		cout << "Enter 'adopt' to adopt a random pet, or 'living' to see more living conditions for other pets: ";
		cin.ignore();
		getline(cin, livingPet);

		char lastLet = livingPet.back();
		cout << "The last character in your message is: " << lastLet << "\n";

		if (livingPet == "Adopt" || livingPet == "adopt")
		{
			adoptRand();
		}
		else if (livingPet == "Living" || livingPet == "living" )
		{
			livingCond();
		}
	}
	if (choice == 2)
	{
		display('*', 100);
		cout << "Welcome to the puppy page! ♡(ᐢ ᴥ ᐢし) \n";
		cout << "Puppies enjoy safe, dry, clean, and quiet places to rest. Puppies get cold fast, so living in a warm, dry place is the best!\n";
		cout << "Loud noises and big objects scare puppies and dogs so be careful with your home environment!\n\n";

		cout << "Are you ready to adopt a random pet, or would you like to see the living conditions for other pets? \n";
		cout << "Enter 'adopt' to adopt a random pet, or 'living' to see more living conditions for other pets: ";
		cin.ignore();
		getline(cin, livingPet);

		char lastLet = livingPet.back();
		cout << "The last character in your message is: " << lastLet << "\n";

		if (livingPet == "Adopt" || livingPet == "adopt")
		{
			adoptRand();
		}
		else if (livingPet == "Living" || livingPet == "living" )
		{
			livingCond();
		}
	}
	if (choice == 3)
	{
		display('*', 100);
		cout << "Welcome to the bunny page! ₍ᐢ ̥ ̞ ̥ᐢ₎ ♥ \n";
		cout << "Bunnies require a lot of room to jump around. Because of this, it is smart to purchase a rabbit cage. The cage must be 5 times the size of the bunny\n";
		cout << "Bunnies get cold fast, so fill your cage with bedding!\n\n";

		cout << "Are you ready to adopt a random pet, or would you like to see the living conditions for other pets? \n";
		cout << "Enter 'adopt' to adopt a random pet, or 'living' to see more living conditions for other pets: ";
		cin.ignore();
		getline(cin, livingPet);

		char lastLet = livingPet.back();
		cout << "The last character in your message is: " << lastLet << "\n";

		if (livingPet == "Adopt" || livingPet == "adopt")
		{
			adoptRand();
		}
		else if (livingPet == "Living" || livingPet == "living" )
		{
			livingCond();
		}
	}
	if (choice == 4)
	{
		display('*', 100);
		cout << "Welcome to the hamster page! ʕ♡˙ᴥ˙♡ʔ \n";
		cout << "Hamsters enjoy a dry, quiet, clean place to rest. Hamsters live in very dry climates so be sure they aren't exposed to damp conditions!\n";
		cout << "Hamsters also live in hamster cages. It is smart to buy some toys to help keep your hamster fit!\n\n";

		cout << "Are you ready to adopt a random pet, or would you like to see the living conditions for other pets? \n";
		cout << "Enter 'adopt' to adopt a random pet, or 'living' to see more living conditions for other pets: ";
		cin.ignore();
		getline(cin, livingPet);

		char lastLet = livingPet.back();
		cout << "The last character in your message is: " << lastLet << "\n";

		if (livingPet == "Adopt" || livingPet == "adopt")
		{
			adoptRand();
		}
		else if (livingPet == "Living" || livingPet == "living" )
		{
			livingCond();
		}
	}
}


void adoptRand()
{
	string randAni;
	string age;
	display('*', 100);
	cout << "Welcome to the Adoption Page, where you can take your forever friend home! >ﻌ< \n";
	cout << "Would you like to adopt a random animal? (You cannot change your random animal and you have only one chance!) ";
	cin.ignore();
	getline(cin, randAni);
	if (randAni == "Yes" || randAni == "yes")
	{
		cout << "\nGenerating a random pet...\n";

		int petR;
		petRand(petR);
	}
	else if (randAni == "No" || randAni == "no")
	{
		cout << "Returning to Main Menu...";
		cout << "To adopt a pet that fits your tastes, head over to option 1, where you can browse and customize a pet to your liking. \n";
		cout << "Afterwards, you may adopt your customized pet in the Play Area!\n";
		display('*', 100);

		menuOp();
	}
}


void merge(float dates[], int start, int mid, int end)
{
	double start1[50], end1[50];

	int i, j, k;

	for(i = 0; i < (mid - start + 1); i++)
	{
		start1[i] = dates[i + start];
	}

	for(i = 0; i < (end - (mid + 1) + 1); i++)
	{
		end1[i] = dates[i + mid + 1];
	}

	i = 0;
	j = 0;
	k = 0;

	for(k = start;k <= end; k++)
	{
		if(i == (mid - start + 1))
			{
				dates[k] = end1[j++];
			}
		else if(j == (end - (mid + 1) + 1))
			{
				dates[k] = start1[i++];
			}
		else
		{
			if(start1[i] < end1[j])
			{
				dates[k] = start1[i++];
			}
			else
			{
				dates[k] = end1[j++];
			}
		}
	}
}

void mergeSort(float dates[], int start, int end)
{
	if(start < end)
	{
		int mid;
		mid = (start + end) / 2;

		mergeSort(dates, start, mid);
		mergeSort(dates, mid + 1, end);

		merge(dates, start, mid, end);
	}
}

void printDates(float dates[], int size)
{
	int i;
	for(i = 0; i < (size-1); i++)
	{
		if(i % 10 == 0)
			cout << "\n\t\t";
			cout << dates[i] << ", ";
	}

	cout << dates[i] << endl;

}


int petRand(int& randPet)
{
	srand(time(0));
	randPet = 1 + rand() % (12 - 1 + 1);

	string yesPet;
	string age;
	cout << endl;
	if (randPet == 1)
	{
		cout << "Your random pet is a Syrian Hamster!\n";
	}
	else if (randPet == 2)
	{
		cout << "Your random pet is a Chinese Hamster!\n";
	}
	else if (randPet == 3)
	{
		cout << "Your random pet is a Dwarf Winter White Russian Hamster!\n";
	}
	else if (randPet == 4)
	{
		cout << "Your random pet is a Lionhead Bunny!\n";
	}
	else if (randPet == 5)
	{
		cout << "Your random pet is a Dutch Bunny!\n";
	}
	else if (randPet == 6)
	{
		cout << "Your random pet is a Flemish Bunny!\n";
	}
	else if (randPet == 7)
	{
		cout << "Your random pet is a Pomeranian Puppy!\n";
	}
	else if (randPet == 8)
	{
		cout << "Your random pet is a Golden Retriever Puppy!\n";
	}
	else if (randPet == 9)
	{
		cout << "Your random pet is a French Bullpet Puppy!\n";
	}
	else if (randPet == 10)
	{
		cout << "Your random pet is a Tabby Kitten!\n";
	}
	else if (randPet == 11)
	{
		cout << "Your random pet is a Siamese Kitten!\n";
	}
	else if (randPet == 12)
	{
		cout << "Your random pet is a Persian Kitten!\n";
	}

	string nameQues;
	string name;
	const int SIZE = 8;
	char userCStr[SIZE];

	cout << "Would you like to name your pet? ";
	getline(cin, nameQues);
	if (nameQues == "Yes" || nameQues == "yes")
	{
		cout << "Enter your pet's name: ";
		cin.getline(userCStr, SIZE);
		cout << endl;
	}

	string howLong;
	cout << "Would you like to know how long your pet has lived with us here at Hasina's Pet Shop?\n";
	getline(cin, howLong);
	if (howLong == "Yes" || howLong == "yes")
	{
    	float dates[] = {10.0422, 5.1023, 4.2923, 3.2023, 12.1022, 5.0423, 5.0323, 2.2423, 2.1423, 1.3123, 11.2322};

    	int size = sizeof(dates) / sizeof(dates[0]);

    	cout << "\nHere are the unsorted dates: \n";
    	cout << "\Dates BEFORE sorting with merge sort:";
    	printDates(dates, size);

    	mergeSort(dates, 0, size - 1);

    	cout << "\nHere are the sorted dates: \n";
    	cout << "\Dates AFTER sorting with merge sort:";
    	printDates(dates, size);

		cout << "Your pet has been at our pet shop since May 4th 2023!!! Thank you for your adoption!\n\n";

	}
	else if (howLong == "No" || howLong == "no")
	{
		cout << endl;
	}

//	void howLong();

	cout << endl;
	cout << "For an extra charge of $20, would you like to determine the age of your pet? ";
//	cin.ignore();
	getline(cin, age);
	if (age == "Yes" || age == "yes")
	{
		cout << "Awesome! Calculating the age of your pet...\n";

		srand(time(0));
		int randAge = 1 + rand() % (100 - 1 + 1);

		cout << "Your pet is " << randAge << " years old." << endl;
		cout << "Your current balance due is: $20\n\n";
		adoptPrice();
	}
	else if (age == "No" || age == "no")
	{
		cout << "Heading to the Adoption Fees page...\n";
		adoptPrice();
	}
	return randPet;
}


void adopt()
{
	string age;
	cout << endl;
	display('*', 100);
	cout << "Welcome to the Adoption Page, where you can take your forever friend home! ₍ᐢ ̥ ̞ ̥ᐢ₎ ♥ \n";
	cout << "For an extra charge of $20, would you like to determine the age of your pet? ";
//	cin.ignore();
	getline(cin, age);

	if (age == "Yes" || age == "yes")
	{
		cout << "Awesome! Calculating the age of your pet...\n\n";

		srand(time(0));
		int randAge = 1 + rand() % (100 - 1 + 1);

		cout << "The age of your pet is: " << randAge << endl;
		cout << "Your current balance due is: $20\n\n";
		adoptPrice();
	}
	else if (age == "No" || age == "no")
	{
		cout << "Heading to the Adoption Fees page...\n";
		adoptPrice();
	}
}


void adoptPrice()
{
	display('*', 100);
	cout << "Welcome to the Adoption Fee page!\n";

	srand(time(0));
	double petFee = 40 + rand() % (100 - 40 + 1);

	cout << "The adoption fee of your pet is: $" << petFee << "\n\n";
	cout << "Thanks for visiting Hasina's Digital Pet Shop ʕꈍᴥꈍʔﾉ♡ \n";
	display('*', 100);

	exit(EXIT_SUCCESS);
}


void display(char s = '*', int count = 10)
{
	for(int i = 1; i <= count; i += 1)
	{
        cout << s;
    }
	cout << endl;
}


