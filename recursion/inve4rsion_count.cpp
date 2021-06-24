#include<iostream>
using namespace std;

int inversion_count(int *arr, int s, int e){
	//base case
	if(s>=e){
		return 0;
	}
	//merge sort
	int mid= (s+e)/2;
	int x = inversion_count(arr,s,mid);
}

int main(){

	int arr[] = {1,5,2,6,3};
	int n = sizeof(arr)/sizeof(int);
	cout << inversion_count(arr, 0, n-1)<< endl;
}