#include<iostream>
using namespace std;

int main(){

	//Allocation
	int b[100];
	cout << sizeof(b) << endl;

	//Dynamic Allocation (on the fly)
	int n;
	cin >> n;
	int *a = new int[n];
	cout << sizeof(a) << endl;

	//NO Change
	for(int i=0; i<n; i++){
		cin >> a[i];
		cout << a[i] << " ";
	}

	//Free up space
	delete [] a; 



	return 0;
}