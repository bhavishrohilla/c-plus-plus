#include<iostream>
using namespace std;

int main(){

	int x = 10;
	//cout<< &x << endl;

	float y = 	10.7;

	cout << &y << endl;

	//Address doesnot work for character variable

	char ch = 'A';

	cout << &ch << endl;

	//Explicit type cadting from char* to void*
	cout<< (void *)&ch << endl; // void * will tell the address of the character

	int *ptr;
	ptr = &x;
	cout << ptr << endl;
	cout << x << endl;

	return 0;
}