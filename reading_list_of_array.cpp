#include<iostream>
using namespace std;

int main(){
	char a[1000][1000];
	int n;
	//Read a list of string and store them in a 2D character array
	cin>>n;
	cin.get();
	for(int i=0; i<n; i++){
		cin.get(a[i],1000);
	}

	//Print out all the strings
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
}