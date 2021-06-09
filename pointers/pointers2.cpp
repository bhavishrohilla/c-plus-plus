#include<iostream>
using namespace std;

int main(){
		int x = 10;
		int *xptr;
		xptr = &x;

		cout << x << endl;		//10

		cout << xptr << endl;		//address
		cout << &x << endl;		//address of x

		cout << *(&x) << endl;
		cout << *(xptr) << endl; 

		cout << *(&xptr) << endl;
		cout << &(*xptr) << endl;


	return 0;
}