#include<iostream>
#include<list>
using namespace std;

class Queue{
	int cs;
	list<int> l;
public:
	Queue(){
		cs = 0;

	}
	bool isEmpty(){
		return cs==0;
	}
	void push(){
		l.push_back(data);
		cs = cs+1;
	}
	void pop(){
		if(!isEmpty()){
			cs--;
			l.pop_front();
		}
	}

	int front(){
		return l.front();
	}
};