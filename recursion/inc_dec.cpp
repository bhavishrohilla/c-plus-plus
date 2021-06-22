#include<iostream>
using namespace std;

void inc(int n){
	//base case
	int dig = 1 ;
	cout << dig << ",";

}

void dec(int n){
	//base case
	if(n==0){
		return;
	}
	//recursion case
	cout << n << ",";
	dec(n-1);
}

int main(){
	int n;
	cin >> n;
	inc(n);
	dec(n); 
}