#include "Classes.h"
#include "Functions.h"

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