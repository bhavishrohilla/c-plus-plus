#include<iostream>
using namespace std;

int clearLastBits(int n, int i){
	int mask = (-1 << i);
	n = (n & mask);
	return n ;
}

int main(){

	int n = 5;
	int i;
	cin >> i;
	cout << clearLastBits(n,i)<< endl;

}