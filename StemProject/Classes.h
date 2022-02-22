#pragma onces

class cityPlanner
{
public:

	cityPlanner();
	cityPlanner(int pop, float acres, float m, int d);
	cityPlanner(cityPlanner& c);

	void setEMag(float m); // User inputed if earthquakes
	void setSqMiles(float acres); // User inputed
	void setPop(int pop); // User inputed
	void setDisaster(int d); // User inputed

	float getSqMiles();
	float getEMag();
	int getPop();
	int getDis(); // get disaster

	float pop_Density(float acres_, int population_);
	int calculateCost();
	int injured();
	int death();
	
private:

	int disaster_; // 1 for flood, 2 for earthquakes
	int population_;
	float sqMiles_;
	float eMag_; // earthquake magnitude 
};