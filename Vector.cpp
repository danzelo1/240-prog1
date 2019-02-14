#include "Vector.h"
#include <iostream>

Vector::Vector(){
	this->current_planets = 0;
	this->planets = NULL;
}

Vector::~Vector(){
        for(int i=0; i<this->current_planets; i++){
	  delete(this->planets[i]);
	}
	delete[] (this->planets);
}

void Vector::insert(int index, Planet *p){
	int num = 0;
	if(this->arr == NULL){
		this->arr[0] = p;
		return;
	}

	Planet **temp = new Planet*[(this->current_planets)+1];
	if(index>= this->current_planets){
		for(int i=0; i<this->current_planets; i++){
			temp[i] = (this->planets)[i];
		}
		temp[this->current_planets] = p;
		this->current_planets++;
		delete[] (this->planets);
		this->planets = temp;
		return;
	}
	for(int i=0; i<this->current_planets+1; i++){
		if(i == index){
			temp[i] = p;
		}else{
			temp[i] = (this->planets)[num];
			num++;
		}
		
	}
	this->current_planets++;
	delete[] (this->planets);
	this->planets = temp;
	return;
}

Planet * Vector::read(int index){
	if(index> this->current_planets) return NULL;
	for(int i=0; i<this->current_planets; i++){
		if(i == index){
			return (this->planets)[i];
	}
	return NULL;
}

bool Vector::remove(int index){
	bool find = false;
	int num = 0;
	if(this->arr == NULL){
		this->arr[0] = p;
		return find;
	}
	if(index>= this->current_planets){
		return find;
	}

	Planet **temp = new Planet*[(this->current_planets)-1];
	for(int i=0; i<this->current_planets; i++){
		if(i == index){
			delete(this->planets[i]);
			find = true;
		}else{
			temp[num] = (this->planets)[i];
			num++;
		}
		
	}
	this->current_planets--;
	delete[] (this->planets);
	this->planets = temp;
	return find;		
}

unsigned Vector::size(){
	return sizeof(this);
}

