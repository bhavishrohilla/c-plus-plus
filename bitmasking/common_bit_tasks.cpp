#include<iostream>
using namespace std;

bool isOdd(int a){
	return (a & 1); //if it is 1 then the no. is odd
}

int main(){

	int n = 5;
	int i = 2;
	cout << isOdd(n);
}