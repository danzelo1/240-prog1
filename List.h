#ifndef HEADER_P1
#define HEADER_P1

class List{
	private:
		Node * current;
		Node * head;
		Node * tail;
	public:	
		List();
		void insert(int index, Planet * p);
		Planet* read(int index);
		bool remove(int index);
		unsigned size();
};

class Node{
	public:
		Planet p;
		Node * next;
		Node * prev;
};
#endif
