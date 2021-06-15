#include<iostream>
using namespace std;

int clearLastBits(int n, int i){
	int mask = (-1 << i);
	n = (n & mask);
	return n ;
}
int clearRangeFromItoJ(int n, int i, int j){
	int a = (~0) << (j+1);
	int b = (1 << i) -1;
	int mask = a | b;
	int ans = n & mask;
	return ans;
}

int main(){

	int n = 31;
	int i = 1;
	int j = 3;
	/*
	cout << "How many bits you want to delete or make 0 from right ofcourse ? - ";
	cin >> i;
	cout << "Ans " <<clearLastBits(n,i)<< endl;
	*/
	cout << clearRangeFromItoJ(n, i, j);

	return 0;
}