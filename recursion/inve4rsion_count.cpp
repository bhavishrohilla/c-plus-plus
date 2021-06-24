#include<iostream>
using namespace std;

void merge(int *a, int s, int e){
	int mid = (s+e)/2;
	int i = s;
	int j = (mid+1);
	int k = s;
}

int inversion_count(int *arr, int s, int e){
	//base case
	if(s>=e){
		return 0;
	}
	//merge sort
	int mid= (s+e)/2;
	int x = inversion_count(arr	,s,mid);
	int y = inversion_count(arr, mid+1, e);
	int z = merge(arr,s,e);//cross inversion
	return x+y+z;
}

int main(){

	int arr[] = {1,5,2,6,3};
	int n = sizeof(arr)/sizeof(int);
	cout << inversion_count(arr, 0, n-1)<< endl;
}