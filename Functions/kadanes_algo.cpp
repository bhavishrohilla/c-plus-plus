#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"Size of array- ";
	cin>>n;
	int a[n];
	int cs=0;
	int ms =0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cs = cs+a[i];
		if(cs<0){
			cs=0;
		}
		ms = max(cs,ms);
	}
	cout<<"MAximum sum is "<<ms<<endl;
}