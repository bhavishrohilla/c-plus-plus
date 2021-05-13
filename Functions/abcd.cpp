#include<iostream>
using namespace std;

void printABDCpattern(int n){
	for(int i=1; i<=n; i++){
		char alphabet = 'A';
		int cnt_alphabet =	n-i+1;
		for(int j=1; j<=cnt_alphabet; j++){
			cout<<alphabet;
			alphabet+=1;
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	printABDCpattern(n);
}