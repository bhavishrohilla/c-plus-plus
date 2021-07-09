#include<iostream>
using namespace std;


//Linear Search
int search(int arr[], int n, int key){
	for(int p=0; p<n; p++){
		if(arr[p]==key){
			return p;
		}
	}
	return n;
}

int main(){
	int a[] = {1,5,3,7,8,6,2};
	int n = sizeof(a)/sizeof(int);
	int key = 7;
	cout << search(a,n,key);
	return 0;
}