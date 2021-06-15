#include<iostream>
using namespace std;

//First method
int countBits(int n){
	int ans = 0;
	while(n>0){
		int last_bit = (n & 1);
		ans += last_bit;
		n = n >> 1;
	}
	return ans;
}

//Second method
int countBitsFaster(int n){
	int ans = 0;
	while(n > 0){
		n = n & (n-1);
		ans++;
	}
}

int main(){
	int n;
	cin >> n;
	cout << countBits(n) << endl;
	cout << countBitsFaster(n) << endl;
}