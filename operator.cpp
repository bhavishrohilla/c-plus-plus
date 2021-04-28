#include<iostream>
using namespace std;

int main(){

	int x = 100;
	int y = x++;  //increment is after the assigment so x will be incremented(100) whereas y will not be incremented(100).
	cout<< x <<endl;
	cout << y;
}