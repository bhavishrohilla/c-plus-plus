#include<iostream>
using namespace std;

int clearRangeFromItoJ(int n, int i, int j){
	int a = (~0) << (j+1);	//~0 means all ones(11111)
	int b = (1 << i) -1;
	int mask = a | b;
	int ans = n & mask;
	return ans;
}
int replaceBits(int n, int m, int i, int j){
	int n_ = clearRangeFromItoJ(n, i ,j);
	int ans = n_ & (m << i);
	return ans;
}

int main(){
	int n = 15;
	int i = 1, j = 3;
	int m = 2;
	cout << replaceBits(n,m,i,j)<< endl;
	return 0;
}