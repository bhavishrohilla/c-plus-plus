#include<iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	char a[m][n];
	char val = 'A';
	for(int row=0;row<=m-1; row++){	//As indexing starts from 0, the index of last row(m th) will be m-1.
		for(int col=1; col<n-1; col++){
			a[row][col] = val;
			val +=1;
			cout<<a[row][col];
		}
		cout<<endl;
	}
}