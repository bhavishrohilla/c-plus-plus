#include<iostream>
using namespace std;

int main(){

	int x = 10;
	cout<< &x << endl;

	float y = 	10.7;

	cout << &y << endl;

	//Address doesnot work for character variable

	char ch = 'A';

	cout << &ch << endl;


	return 0;
}