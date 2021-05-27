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

	int i=0;
	int j =n-1;
	int ch = a[i][j];
	while(i<n and j>=0){
		if(ch=key){
			cout<<i<<" and "<<j;
			return 0;
		}
		else if(ch>key){
			i= i+1;
		}
		else{
			j= j+1;
		}
	}
	cout<<i<<" and "<<j;

	return 0;

}