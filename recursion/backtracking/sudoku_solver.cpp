#include<iostream>
using namespace std;

bool solveSudoku(int mat[][9], int i, int j, int n){
	//base case
	if(i==n){
		//Print the matrix
		return true;
	}
	//Case row end
	if(j==n){
		return solveSudoku(mat,i+1,0,n);
	}

	//rec case
}

int main(){
	int mat[9][9]= {
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9},
	};


	return 0;
}