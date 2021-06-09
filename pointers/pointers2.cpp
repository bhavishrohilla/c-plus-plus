#include<iostream>
using namespace std;

int main(){
		int x = 10;
		int *xptr;
		xptr = &x;

		cout << x << endl;		//10
		cout << endl;

		cout << xptr << endl;		//address of x
		cout << &x << endl;		//address of x
		cout << endl;
		cout << *(&x) << endl;		//10
		cout << *(xptr) << endl; 		//10
		cout << endl;
		cout << *(&xptr) << endl;		//
		cout << &(*xptr) << endl;


	return 0;
}