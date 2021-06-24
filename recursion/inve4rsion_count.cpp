#include<iostream>
using namespace std;

int main(){

	int arr[] = {1,5,2,6,3};
	int n = sizeof(arr)/sizeof(int);
	cout << inversion_count(arr, 0, n-1)<< endl;
}