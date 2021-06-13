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

	//take input and print the elements
	int val = 1;
	for(int i=0; i<r; i++){
		for (int j = 0; i < c; j++){
			arr[i][j] = val;
			val++;

		}
	}

	return 0;
}