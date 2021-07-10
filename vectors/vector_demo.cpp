#include<iostream>
#include<vector>
using namespace std;

int main(){

	//Create and initilize a vector
	vector<int> v;
	vector<int> b(5,10);//five integers in an array and they have a value 10
	vector<int> c(b.begin(),b.end());

	vector<int> d{1,2,3,10,13};

	return 0;
}