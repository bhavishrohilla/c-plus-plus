#include<iostream>
#include<climits>
using namespace std;

int main(){

	//Data Types + Data Type Modifiers
	//long , short, signed, unisigned

	int x;

	cout<<sizeof(x)<<endl;

	x = INT_MAX;
	cout<<"X : "<<x<<endl;

	x = x+1; //As we are adding 1 to the max value of int, it will be added to the min value of int
	cout<<"Updated X : "<<x<<endl;

	x = x+2147483648;
	cout<<"further updated X :"<<x; //the answer will be zero
	
	return 0;
}