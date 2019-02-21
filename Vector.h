#ifndef Vector_P1
#define Vector_P1
#include "Planet.h"

class Vector{
private:
	int current_planets;
public:
	Planet **planets;
	Vector();
	~Vector();
    void insert(int, Planet *);
	Planet *read(int);
	bool remove(int);
    unsigned size();
};

#endif
