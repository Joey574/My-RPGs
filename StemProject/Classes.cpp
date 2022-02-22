#include "Classes.h"
#include "Functions.h"

const float dMult;

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
	return pD(pop, acres);
}

int cityPlanner::calculateCost()
{
	
}