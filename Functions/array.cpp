#include<iostream>
using namespace std;

int main(){

	int a[10] = {0}; //0,0,0,......,0
	int b[10] = {5}; //5,0,0,......,0
	int c[10] = {1,2,3}; //1,2,3,0,0,0.....,0
	//int n;
	/*cin>>n;
	int d[n];    
	for(int i=0; i<n; i++){
		cin>>d[i];
	}*/
	/*for(int i=0; i<10; i++){
		cout<<c[i]<<", ";
	}*/
	/*for(int i=0; i<5; i++){
		cin>>a[i];
	}
	for(int i=0; i<10; i++){
		cout<<a[i]<<", ";
	}*/
	int n = sizeof(a)/sizeof(int); //size of 1 bucket is 4 bytes(if datatype is int) so the size of 10 will be 40. Hence we divided the size of int(here)
	cout<< n <<endl;
}
