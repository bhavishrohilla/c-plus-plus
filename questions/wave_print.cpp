#include<iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	int val = 1;
	for(int row=0; row<=m-1; row++){
		for(int col=0; col<=n-1; col++){
			a[row][col] = val;
			val+=1;
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	//Wave Print
	for(int col=0; col<=n-1; col++){
		if(col%2==0){
			//Even column - top to bottom direction
			for(int row=0; row<=m-1; row++){
				cout<<a[row][col]<<" ";
			}
		}
		else{
			//Odd column - bottom up direction
			for(int row=m-1; row>=0; row--){
				cout<<a[row][col]<<" ";
			}
		}
	}


	return 0;
}