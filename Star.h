#ifndef Star_DL
#define Star_DL
#include "Planet.h"

class Star{
private:
	int current_planets;
public:
	Planet **planets;
    Star();
	~Star();
    int addPlanet();
	bool removePlanet(long int);
	Planet *getPlanet(long int);
    Planet getFurthest();
    void orbit();
    void printStarInfo();
    int getCurrentNumPlanets() {return this->current_planets;}
    //you may add any additional methodas you may need.
};

#endif
