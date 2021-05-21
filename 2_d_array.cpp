#include<iostream>
using namespace std;

int main(){
	int row,col;
	int a[row][col];
	int val = 1;
	for(int i=0; i<(row-1); i++){
		for(int j=0; j<(col-1); j++){
			a[row][col] = val;
			val=val+1;
			cout<<a[i][j];
		}
	}


	return 0;
}