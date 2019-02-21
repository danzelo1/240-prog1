#include "List.h"
#include <cstdlib>
#include <iostream>

List::List(){
	this->head = NULL;
	this->tail = NULL;
}

List::~List(){

}

void List::insert(int index, Planet * p){
	int i = 0;
	Node * new = new Node(p);
	while (int i != index){
		current = next;
	}
	if (current == NULL){
		//append to list
	}
	
}

Planet* List::read(int index){

}

bool List::remove(int index){

}

unsigned List::size(){

}
