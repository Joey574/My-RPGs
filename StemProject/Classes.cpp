#include "Classes.h"
#include "Functions.h"

using namespace std;

const int cityCost = 4000;
const int subCost = 800;
const int _3Cost = 600;
const int _4Cost = 750;
const int _5Cost = 900;


// CONSTRUCTORS 
cityPlanner::cityPlanner()
{
	sqMiles_ = 0;
	population_ = 0;
	eMag_ = 0;
	disaster_ = 0;
}

cityPlanner::cityPlanner(int pop, float a, float m, int d)
{
	population_ = pop;
	sqMiles_ = a;
	eMag_ = m;
	disaster_ = d;
}

cityPlanner::cityPlanner(cityPlanner& c)
{
	population_ = c.population_;
	sqMiles_ = c.sqMiles_;
}
//^^^^^^^




// SETTERS
void cityPlanner::setPop(int pop)
{
	population_ = pop;
} 

void cityPlanner::setDisaster(int d)
{
	disaster_ = d;
}

void cityPlanner::setEMag(float m)
{
	eMag_ = m;
}

void cityPlanner::setSqMiles(float m)
{
	sqMiles_ = m;
}

void cityPlanner::setCity(bool c)
{
	city = c;
}
//^^^^^^^^^




// GETTERS
int cityPlanner::getPop()
{
	return population_;
}

int cityPlanner::getDis()
{
	return disaster_;
}

float cityPlanner::getEMag()
{
	return eMag_;
}

float cityPlanner::getSqMiles()
{
	return sqMiles_;
}
//^^^^^^




float cityPlanner::pop_Density(float acres, int pop)
{
	return pop / acres;
}

vector<int> cityPlanner::death() // 14% of original population worth of pets die
{
	vector<int> death;

	if (disaster_ == 1)
	{
		death.push_back(population_ * 0.002); // human death

		death.push_back(population_ * 0.07); // pet death
	}
	else if (disaster_ == 2)
	{
		if (eMag_ == 0)
		{
			death.push_back(0);
			death.push_back(0);
			death.push_back(0);
		}
		else if (eMag_ == 1)
		{
			death.push_back(0);
			death.push_back(0);
			death.push_back(0);
			if (city == true)
			{
				death.push_back((sqMiles_ * cityCost) * 0.20);
			}
			else
			{
				death.push_back((sqMiles_ * subCost) * 0.20);

			}
		}
		else if (eMag_ == 2)
		{
			death.push_back(population_ * 0.0016);
			death.push_back(population_ * 0.0022);
			death.push_back(population_ * 0.14); // pet death
			if (city == true)
			{
				death.push_back((sqMiles_ * cityCost) * 0.40);
			}
			else
			{
				death.push_back((sqMiles_ * subCost) * 0.40);

			}
		}
		else if (eMag_ == 3)
		{
			death.push_back(population_ * 0.016);
			death.push_back(population_ * 0.022);
			death.push_back(population_ * 0.14); // pet death
			if (city == true)
			{
				death.push_back((sqMiles_ * cityCost) * 0.60);
			}
			else
			{
				death.push_back((sqMiles_ * subCost) * 0.60);

			}
			death.push_back(sqMiles_ * _3Cost);
			
		}
		else if (eMag_ == 4)
		{
			death.push_back(population_ * 0.16);
			death.push_back(population_ * 0.06);
			death.push_back(population_ * 0.14); // pet death
			if (city == true)
			{
				death.push_back((sqMiles_ * cityCost) * 0.70);
			}
			else
			{
				death.push_back((sqMiles_ * subCost) * 0.70);

			}
			death.push_back(sqMiles_ * _4Cost);

		}
		else if (eMag_ == 5)
		{
			death.push_back(population_ * 0.35);
			death.push_back(population_ * 0.08);
			death.push_back(population_ * 0.14); // pet death
			if (city == true)
			{
				death.push_back((sqMiles_ * cityCost) * 0.80);
			}
			else
			{
				death.push_back((sqMiles_ * subCost) * 0.80);

			}
			death.push_back(sqMiles_ * _5Cost);
		}
		
	}
	else if (disaster_ == 3)
	{
		if (eMag_ == 4)
		{
			death.push_back(population_ * 0.20);
			death.push_back(population_ * 0.08);
			death.push_back(population_ * 0.18); // pet death
			if (city == true)
			{
				death.push_back((sqMiles_ * cityCost) * 0.80);
			}
			else
			{
				death.push_back((sqMiles_ * subCost) * 0.80);

			}
			death.push_back(sqMiles_* (_4Cost + 300));

		}
		else if (eMag_ == 5)
		{
			death.push_back(population_ * 0.40);
			death.push_back(population_ * 0.10);
			death.push_back(population_ * 0.18); // pet death
			if (city == true)
			{
				death.push_back((sqMiles_ * cityCost) * 0.90);
			}
			else
			{
				death.push_back((sqMiles_ * subCost) * 0.90);

			}
			death.push_back(sqMiles_* (_5Cost + 300));
		}

	}

	return death;
}