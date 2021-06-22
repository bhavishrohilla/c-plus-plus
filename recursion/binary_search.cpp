#include<iostream>
using namespace std;

int binarySearch(int a[], int key, int n){
	int s = 0;
	int e = n-1;
	while(s<=e){
		int mid = (s+e)/2;	
		if(a[mid] == key){
			return mid;
		}
		else if(a[mid]>key){
			e = mid -1;
		}
		else{
			s = mid + 1;
		}
	}
	
}

int main(){

	int arr[] = {1,2,3,4,6,7,9};
	int n = sizeof(arr)/sizeof(int);
	int key;
	cin >> key;
	binarySearch(arr,n,key);
	
	return 0;
}