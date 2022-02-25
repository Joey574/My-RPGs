/*
Authors: Joey Soroka, Eric Pace, Kian Darrington
File Name: StemProject.cpp
Pseudocode:
Maintenance Log: 
2/14/21: Started Project
2/21/22: Added 2d vector for state info, included info about cost per acre and parking structure cost
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <windows.h>
#include <string>
#include <fstream>
#include <math.h>

#include "Classes.h"
#include "Structs.h"
#include "Functions.h"

using namespace std;

int main()
{
	cityPlanner c; // main class

	string input;

	int pop; // population

	float sqmil; // sq miles
	float acres; // acres

	char cInput; // char input

	printf("Welcome to our disaster relief planner...\n");
	_getch();
	
	while (1)
	{
		system("CLS");
		printf("What is your disaster?\n1. Flood\n2. Earthquake\nInput: ");
		cin >> input;
		input = capitalize(input);
		if (input == "FLOOD" || input == "1")
		{

		}
		else if (input == "EARTHQUAKE" || input == "2")
		{

		}
		else
		{
			printf("Invalid input try again");
			_getch();
			continue;
		}
		break;
	}
	
	while (1)
	{
		cout << "Input Population: ";
		cin >> pop;
		
		cout << "Input Square miles of affected land: ";
		cin >> sqmil;

		cout << "Is the above information corect (y/n): ";
		cInput = _getche();
		toupper(cInput);
		system("CLS");

		if (cInput == 'N')
		{
			continue;
		}
		break;
	}
	c.setPop(pop);
	acres = mtoa(sqmil);
	c.setAcres(acres);

	
	
}

