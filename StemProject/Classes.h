#pragma once

class cityPlanner
{
public:

	cityPlanner();
	cityPlanner(int pop);

	void setAcres(float acres); // User inputed
	void setPop(int pop); // User inputed

	float getAcres();
	int getPop();
	float getCost();
	float getPopDensity();

	void calculatePopDensity();
	int calculateCost();
	
private:

	float population_Density_;
	float acres_ = 0;
	int population_ = 0;
	int cost_;
};