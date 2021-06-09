#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	int *xptr = &x;
	cout<< xptr << endl;	//address of the the storage where the x is stored.
	cout<< *(&x) << endl;	//x that is 10.
	cout<< *(&x) + 1 << endl;		//11

	return 0;
}