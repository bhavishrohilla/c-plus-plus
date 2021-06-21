#include<iostream>
using namespace std;

int factorial(int n){
	int ans = 1;
	while(n>=1){
		ans = ans * n;
		n = n-1;
	}
	return ans;
}

int main(){

	int n;
	cin >> n;
	cout << factorial(n);

	return 0;
}