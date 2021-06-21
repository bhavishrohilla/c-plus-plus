#include<iostream>
using namespace std;

bool inc(int n){
	int ans = 1;
	while(ans<=n){
		cout << ans << ",";
		ans = ans + 1;
	}
	return 0;
}

int dec(int n){
	while(n>0){
		cout << n << ",";
		n = n-1;
	}
	return;
}

int main(){
	int n;
	cin >> n;
	cout << inc(n) << endl;
	cout << dec(n)<<endl;
}