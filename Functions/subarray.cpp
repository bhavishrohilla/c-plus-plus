#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Size of array - ";
	cin>>n;
	int a[n];
	cout<<"Write all the elements"<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){

			//Printing elements of subarray(i,j)
			for(int k=i; k<=j; k++){
				cout<<a[k]<<", ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}