#include<iostream>
using namespace std;
int main() {
	int n;
	int array[100];
	n = cin.get();
	while(n!='\n'){
		cin>>array[n];
		n = cin.get();
	}
	for(int i=sizeof(array[n]); i<0; i--){
		cout<<array[i];
	}
	return 0;
}