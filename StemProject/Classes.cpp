#include "Classes.h"
#include "Functions.h"

const float fourStory = 1.73333333;
const float fiveStory = 2;
const float sixStory = 2.5;
const float tenStory = 3;
const float fifteenStory = 3.33333333;
const float twentyStory = 3.5;
const float thirtyStory = 3.88888889;
const float fortyStory = 4.44444444;
const float fiftyStory = 5;

const int peopleToHos = 10;


cityPlanner::cityPlanner()
{
	population_Density_ = 0;
	cost_ = 0;
}

void cityPlanner::setPop(int pop)
{
	population_ = pop;
} 

void cityPlanner::setAcres(float acres)
{
	acres_ = acres;
}

int cityPlanner::getPop()
{
	return population_;
}

float cityPlanner::getAcres()
{
	return acres_;
}

float cityPlanner::getPopDensity()
{
	return population_Density_;
}

float cityPlanner::getCost()
{
	return cost_;
}

void cityPlanner::calculatePopDensity()
{
	population_Density_ = atom(acres_) / population_;
}

int cityPlanner::calculateCost()
{
	return cost_;
}