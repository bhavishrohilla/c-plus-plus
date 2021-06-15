#include<iostream>
using namespace std;

bool isOdd(int a){
	return (a & 1); //if it is 1 then the no. is odd
}

int getBit(int n, int i){
	int mask = (1 << i);
	int bit = (n & mask) > 0 ? 1 : 0;
	return bit;
}
int setBit(int &n, int i){
	 int mask = (1 << i);
	 int ans = n | mask;
	 return ans;
}

int main(){

	int n = 5;
	cout << "Which bit you want to set ? - ";
	int j;
	cin >> j;
	//cout <<"The "<<i<<" bit is "<< getBit(n,i)<<endl;
	cout << "Ans " << setBit(n,j);
	//cout << isOdd(n);

	return 0;
}