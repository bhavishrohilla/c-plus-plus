#include<iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[100][100] = {1,2,3};
	for(int row=0; row<=m-1; row++){
		for(int col=0; col<=n-1; col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
}