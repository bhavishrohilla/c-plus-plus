#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	int *xptr = &x;
	cout<< xptr << endl;	//address of the the storage where the x is stored.
	cout<< *(&x) << endl;	//x that is 10.

	return 0;
}