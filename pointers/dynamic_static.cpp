#include<iostream>
using namespace std;

int main(){

	//Allocation + deallocation is done by compiler
	int b[100] = {0};
	cout << sizeof(b) << endl;
	cout << b << endl; //Symbol table
	//here b can be overwritten, b is a constant

	//Dynamic Allocation (on the fly)
	int n;
	cin >> n;
	int *a = new int[n]{0};
	cout << sizeof(a) << endl;
	cout << a << endl; //variable a that is created inside the staitc memory -> overwritten
	


	//NO Change
	for(int i=0; i<n; i++){
		cin >> a[i];
		cout << a[i] << " ";
	}

	//Free up space
	delete [] a; 



	return 0;
}