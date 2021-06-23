#include<iostream>
using namespace std;

int firstOccur(int a[], int n, int key){
	if(n==0){
		return -1;
	}
	//rec case
	if(a[0] ==key){
		return 0;
	}
	int i = firstOccur(a+1, n-1,key);
	if(i==-1){
		return -1;
	}
	return i+1;
}

//alternate of same fn
int linearSeach(int *a, int i, int n, int key){
	//base case
	if(i==n){
		return-1;
	}
	//rec case
	if(a[i] == key){
		return i;
	}
	return linearSeach(a, i+1, n, key);
}

int main(){
	int arr[] =  {1,2,3,7,4,5,6,7,10};
	int key = 7;
	int n = sizeof(arr)/sizeof(int);

cout << firstOccur(arr, n, key);

	return 0;
}