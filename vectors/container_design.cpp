#include<iostream>
#include "vector.h"	//user defined vector class
using namespace std;



int main(){
	Vector v;
	v.push_back(1);	//Capacity 1
	v.push_back(2);	//Capacity 2
	v.push_back(3);	//Capacity 4(push_back will add element as well double the size of the array)
	v.push_back(4);

	v.pop_back();
	v.push_back(6); //Capacity 4 (as 4 elements can accomodate in the array of size 4)
	v.push_back(7); //Capacity 8 

	cout <<"Capacity "<< v.capacity()<<endl;

	for(int i=0; i<v.size();i++){
		cout << v[i] <<" ";
	}


	return 0;
}