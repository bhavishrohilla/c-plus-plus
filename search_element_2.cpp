#include<iostream>
using namespace std;

int main(){

	int n,key;
	cout<<"Size of Matrix - ";
	cin>>n;
	cout<<"Key to be searched - ";
	cin>>key;
	int val=1;
	int a[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j] = val;
			cout<<a[i][j]<<" ";
			val = val + 1;
		}
		cout<<endl;
	}
	int i,j;
	for(i=0; i<n; i++){
		for(j =n-1; j>0; j++){
			int ch =a[i][j];
			while(key==ch){
				if(key>a[i][j]){
					a[i][j] = a[i+1][j];
				}
				else if(key<a[i][j]){
					a[i][j] = a[i][j-1];
				}
				break;
			}
		}
	}
	cout<<i<<" "<<j;
}