#pragma once

#include<string>

using namespace std;

int atom(float acres) // acres to miles
{
	return acres / 640;
}

int mtoa(float sqmil) // miles to acres
{
	return sqmil * 640;
}

float pD(int pop, int acre) // pop density calculator
{
	return pop / acre;
}

string capitalize(string c) // capitalizes string
{
	for (int i = 0; i < c.length(); i++)
	{
		toupper(c[i]);
	}
	return c;
}

string lowertarize(string l) // lowertarizes string
{
	for (int i = 0; i < l.length(); i++)
	{
		tolower(l[i]);
	}
	return l;
}

float atof(int a) // acres to feet
{
	return a * 43560;
}

float ftoa(int f) // feet to acres
{
	return f / 43560;
}