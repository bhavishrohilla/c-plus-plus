#include<iostream>
using namespace std;

int multi(int n, int t){
	if(t==0){
		return 0 ;
	}
	int m1 = multi(n,t-1);
	int ans = n + m1;
	return ans;
}

int main(){

	int n,t;
	cin >> n >> t ;
	cout << multi(n,t);


	return 0;
}