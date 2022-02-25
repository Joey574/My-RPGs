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

	vector<int> death;

	string input;

	int pop; // population

	float sqmil; // sq miles
	float mag; // earthquake magnitude

	bool flood = false;
	bool earth = false;
	bool city;

	char cInput; // char input

	printf("Welcome to our disaster relief planner...\n");
	_getch();
	
	while (1)
	{
		system("CLS");
		printf("What is your disaster?\n1. Flood\n2. Earthquake\nInput: ");
		cin >> input;

		if (input == "FLOOD" || input == "1")
		{
			flood = true;
			c.setDisaster(1);
		}
		else if (input == "EARTHQUAKE" || input == "2")
		{
			earth = true;
			c.setDisaster(2);
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
		system("CLS");
		cout << "1: City area\n2: Suburban/Rural area\nInput: ";
		cin >> input;
		if (input == "1")
		{
			c.setCity(true);
			city = true;
		}
		else if (input == "2")
		{
			c.setCity(false);
			city = false;
		}
		else
		{
			printf("Invalid input try again");
			_getch();
			continue;
		}
		break;
	}
		cout << "Input Population: ";
		cin >> pop;
		c.setPop(pop);

		cout << "Input Square miles of affected land: ";
		cin >> sqmil;
		c.setSqMiles(sqmil);

		if (earth == true)
		{
			cout << "Enter magnitude of earthquake: ";
			cin >> mag;
			if (mag <= 3.9)
			{
				c.setEMag(0);
			}
			else if (mag > 3.9 && mag <= 4.9)
			{
				c.setEMag(1);
			}
			else if (mag > 4.9 && mag <= 6.0)
			{
				c.setEMag(2);
			}
			else if (mag > 6.0 && mag <= 6.9)
			{
				c.setEMag(3);
			}
			else if (mag > 6.9 && mag <= 7.9)
			{
				c.setEMag(4);
			}
			else if (mag >= 8.0)
			{
				c.setEMag(5);
			}

			if (mag >= 7.0)
			{
				cout << "Is the affected area within 30 miles of any major water sourece? (y/n): ";
				cInput = _getche();
				cInput = toupper(cInput);

				if (cInput == 'Y')
				{
					c.setDisaster(3);
				}
			}
		}
		system("CLS");
		death = c.death();
		cout << "Number of body bags needed: " << death[0] << endl;
		cout << "Number of boo-boo band aids needed: " << death[1] << endl;
		cout << "Number of dead puppies: " << death[2] << endl;
		cout << "Infrastructure damage: " << death[3] << "000" << endl;

	
	return 0;
}

