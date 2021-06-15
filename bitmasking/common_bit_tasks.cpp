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
void clearBit(int &n, int i){
	int mask = ~(1 << i);
	n = (n & mask);
}
void updateBit(int &n, int i, int v){
	int mask = ~(1 << i);
	int cleared_n = n & mask;
	n = cleared_n | (v<<i); 
}

int main(){

	int n = 5;
	cout << "Which bit you want to delete ? - ";
	int k;
	cin >> k;
	//cout <<"The "<<i<<" bit is "<< getBit(n,i)<<endl;
	
	//cout << "Ans " << setBit(n,j);
	
	//cout << isOdd(n);
	
	/*
	clearBit(n,k);
	cout << n;
	*/
	updateBit(n , 2 , 0);
	updateBit(n, 3, 1);
	cout << n << endl;

	return 0;
}