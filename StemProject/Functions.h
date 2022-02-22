#pragma once

#include<string>

using namespace std;

int atom(float acres)
{
	return acres / 640;
}

int mtoa(float sqmil)
{
	return sqmil * 640;
}

float popDensity(int pop, int acre)
{
	return pop / acre;
}

string capitalize(string c)
{
	for (int i = 0; i < c.length(); i++)
	{
		toupper(c[i]);
	}
	return c;
}

string lowertarize(string l)
{
	for (int i = 0; i < l.length(); i++)
	{
		tolower(l[i]);
	}
	return l;
}

float atof(int a)
{
	return a * 43560;
}

float ftoa(int f)
{
	return f / 43560;
}