#ifndef Planet_DL
#define Planet_DL

class Planet{
private:
	long id;
	int position;
	int distance;
	char type;
public:
	Planet(int);
    int orbit();
	long getID() {return this->id;}
    int getDistance() {return this->distance;}
    int getPos() {return this->position;}
	char getType() {return this->type;}
	//you may add any additional methods you may need.
};

#endif
