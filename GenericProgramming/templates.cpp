#include<iostream>
using namespace std;

template<typename T>
//Linear Search
int search(T arr[], int n, T key){
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

	float b[] = {1.1, 1.2, 1.3};
	float k = 1.3;
	//cout << search(a,n,key);
	cout << search(b,3,k);
	return 0;
}