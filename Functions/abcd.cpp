#include<iostream>
using namespace std;

void printABDCpattern(int n){
	for(int i=1; i<=n; i++){
		char alphabet = 'A';
		for(int j=n-i+1; j>0; j--){
			cout<<alphabet;
			alphabet = alphabet+1;
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	printABDCpattern(n);
}