#include "Star.h"
#include <iostream>


Star::Star(){
	this->current_planets = 0;
	this->next_id = 0;
	this->planets = NULL;
}

Star::~Star(){
        for(int i=0; i<this->current_planets; i++){
	  delete(this->planets[i]);
	}
	delete[] (this->planets);
}

int Star::addPlanet(){
	Planet **temp = new Planet*[(this->current_planets)+1];
	for(int i=0; i<this->current_planets; i++){
		temp[i] = (this->planets)[i];
	}
	Planet *temp2 = new Planet(this->next_id);
	temp[this->current_planets] = temp2;
	this->next_id++;
	this->current_planets++;
	delete[] (this->planets);
	this->planets = temp;
	return temp2->getID();
}

bool Star::removePlanet(int id){
	bool find = false;
	for(int i=0; i<this->current_planets; i++){
		if(this->planets[i]->getID() == id){
			find = true;
		}
	}
	if(find){
		Planet **temp = new Planet*[this->current_planets-1];
		for(int j=0,k=0; j<this->current_planets; j++){
			if(this->planets[j]->getID() != id){
				temp[k] = this->planets[j];
				k++;
			} else{
				delete(this->planets[j]);
			}
		}
		this->current_planets--;
		delete[](this->planets);
		this->planets = temp;
	}
	return find;		
}

Planet *Star::getPlanet(int id){
	Planet *ret = NULL;
	for(int i=0; i<this->current_planets; i++){
		if(this->planets[i]->getID() == id){
			ret = this->planets[i];
		}
	}
	return ret;

}

void Star::orbit(){
	for(int i=0; i<this->current_planets; i++){
		this->planets[i]->orbit();
	}
}

void Star::printStarInfo(){
	std::cout << "The star currently has " << this->current_planets << " planets." << std::endl;
	std::cout << "Planets:" << std::endl;
	for(int i=0; i<this->current_planets; i++){
		std::cout << "	Planet " << this->planets[i]->getType() << this->planets[i]->getID() << " is " << this->planets[i]->getDistance() << " miles away at position " << this->planets[i]->getPos() << " around the star."<< std::endl;
	}
}
