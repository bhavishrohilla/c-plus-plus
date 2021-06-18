#include<iostream>
using namespace std;

int main(){
	int dig, pow;
	cin >> dig>>pow;
	int ans=1;
	for(int i=0; i<pow; i++){
		ans = ans * dig;
	}
	cout << ans;
}