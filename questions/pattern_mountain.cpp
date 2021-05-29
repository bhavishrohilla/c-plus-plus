#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	for(int row=0; row<n; row++){
		int spc = n-row+1;
		for(int col=1; col<=row; col++){
			cout<<col;
		}
		for(int dash=0; dash<spc; dash++){
			cout<<".";
		}	
		for(int col = row; col>0; col--){
			cout<<col;
		}
		cout<<endl;
		spc = spc - 2;
	}

	return 0;
}