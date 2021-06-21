#include<iostream>
using namespace std;

int fibo(int n){
	//Base case
	if(n==0 or n==1){
		return n;
	}

	//Recursion case
	int f1 =  fibo(n-1);
	int f2 =  fibo(n-2);
	return fibo(1) + fibo(2);
}

int main(){
	int n;
	cin >> n;

	cout << fibo(n) << endl;
	return 0;
}