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
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int ch = a[i][j];
			if(ch==key){
				cout<<"the key is in "<<i+1<<" row and "<<j+1<<" column";
				break;
			}
		}
	}
}