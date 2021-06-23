#include<iostream>
using namespace std;

int power(int a, int n){
	if(n==0){
		return 1;
	}
	int p1 = power(a,n-1);
	int ans = a*p1;
	return ans; 
}

int fastPower(int a, int n){
	if(n==0){
		return 1;
	}
	//rec case
	int smaller_ans = fastPower(a,n/2);
	smaller_ans *= smaller_ans;
	if(n&1){
		return smaller_ans*a;
	}
	return smaller_ans;
}

int main(){

	int a,n;
	cin >> a >> n;
	cout << power(a,n);

}