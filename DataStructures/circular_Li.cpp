#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	//comstructor
	node(int d){
		data = d;
		next = NULL;

	}
};