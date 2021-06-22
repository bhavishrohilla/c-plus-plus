#include<iostream>
using namespace std;

int multi(int n, int t){
	if(t==1){
		return n* ;
	}
	int m1 = n + multi(n,t-1);
	return m1;
}

int main(){

	int n,t;
	cin >> n >> t ;
	cout << multi(n,t);


	return 0;
}