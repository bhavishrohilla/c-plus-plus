#include<iostream>
using namespace std;

int main(){

	int a[10] = {0}; //0,0,0,......,0
	int b[10] = {5}; //5,0,0,......,0
	int c[10] = {1,2,3}; //1,2,3,0,0,0.....,0
	int n;
	/*cin>>n;
	int d[n];
	for(int i=0; i<n; i++){
		cin>>d[i];
	}*/
	for(int i=0; i<10; i++){
		cout<<c[i]<<", ";
	}
}
