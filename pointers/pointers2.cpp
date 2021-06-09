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

		cout << *(&xptr) << endl;		//address of x
		cout << &(*xptr) << endl;		//address of x

		cout << &xptr << endl;

		//Double pointer
		int **xxptr = &xptr;
		cout << xxptr << endl;


	return 0;
}