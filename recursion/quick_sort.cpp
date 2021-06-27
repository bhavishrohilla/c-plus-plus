#include<iostream>
using namespace std;



int main(){
	//Quick sort
	int arr[] = {2,7,8,6,1,5,4};
	int n = sizeof(arr)/sizeof(int);
	quickSort(arr, 0, n-1);

	return 0; 
}