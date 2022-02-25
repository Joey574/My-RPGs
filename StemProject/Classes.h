#pragma once
#include <vector>

using namespace std;

class cityPlanner
{
public:

	cityPlanner();
	cityPlanner(int pop, float acres, float m, int d);
	cityPlanner(cityPlanner& c);

	void setEMag(float m); // User inputed if earthquakes
	void setSqMiles(float miles); // User inputed
	void setPop(int pop); // User inputed
	void setDisaster(int d); // User inputed
	void setCity(bool c); // user inputed

	float getSqMiles();
	float getEMag();
	int getPop();
	int getDis(); // get disaster
	bool getEarth();
	bool getFlood();

	float pop_Density(float acres_, int population_);
	int calculateCost();
	int injured();

	vector<int> death();
	
private:

	int disaster_; // 1 for flood, 2 for earthquakes, 3 for both
	int population_;
	float sqMiles_;
	float eMag_; // earthquake magnitude 
	bool city = false; // true = city, false = suburban/rural
};