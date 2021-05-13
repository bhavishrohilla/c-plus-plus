#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		char alphabet = 'A';
		for(int j=n-i+1; j>0; j--){
			cout<<alphabet;
			alphabet = alphabet+1;
		}
		cout<<endl;
	}
}