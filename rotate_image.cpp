#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int a[][100], int n){
	//reverse each row
	for(int row=0; row<n; row++){
		int start_col = 0;
		int end_col = n-1;
		while(start_col < end_col){
			swap(a[row][start_col],a[row][end_col]);
			start_col++;
			end_col--;
		}
	}
	//Transpose
	for(int i=0; i,n; i++){
		for(int j=0; j<n; j++){
			if(i<j){
				swap(a[i][j], a[j][i]);
			}
		}
	}
}


int main(){
	int n;
	cin>>n;
	int a[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){			
			cin>>a[i][j];	
		}
	}
	rotate(a, n);
	display(a, n);
	return 0;
}