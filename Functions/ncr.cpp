#include<iostream>
using namespace std;

int factorial(int n){
	int ans = 1;
	for(int  i=1;i<=n; i++){
		ans*=i;
	}
	return ans;
}
int NCR(int n, int r){
	int ncr = factorial(n)/(factorial(n-r)*factorial(r));
	return ncr;
}

int main(){
	int n,r;
	cin>>n>>r;


	cout<<NCR(n,r)<<endl;
	return 0;
}