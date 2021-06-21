#include<iostream>
using namespace std;

int factorial(int n){
	//base case
	if(n==0){
		return 1;
	}

	//recursive case
	int small_ans = factorial(n-1);
	int ans = n*small_ans;
	return ans;
}

int main(){

	int n;
	cin >> n;
	cout << factorial(n);

	return 0;
}