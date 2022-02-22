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
	cityPlanner c;

	int istin; //integer state input
	int pop;

	float sqmil;
	float acres;

	bool loop = true;

	string sstin; //string state input

	printf("Welcome to our disaster relief planner...\n");
	_getch();
	system("CLS");

	cout << "Input Population: ";
	cin >> pop;

	cout << "Input Square miles of affected land: ";
	cin >> sqmil;

	system("CLS");
	c.setPop(pop);
	acres = mtoa(sqmil);
	c.setAcres(acres);


}

