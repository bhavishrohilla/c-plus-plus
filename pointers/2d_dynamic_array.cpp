#include<iostream>
using namespace std;

int main(){
	int **arr;
	int r, c;
	cin >> r >> c;

	//Create an array of row heads
	arr = new int*[r];

	//Create 2d array

	for(int i=0; i<r; i++){
		arr[i] = new int[c];
	}

	return 0;
}