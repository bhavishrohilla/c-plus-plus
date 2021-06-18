#include<iostream>
using namespace std;

int power_optimised(int a, int n){
	int ans = 1;
	while(n>0){
		int last_bit = (n&1);
		if(last_bit){
			ans = ans *a; 
		}
		a = a*a;
		n = n>>1;
	}
	return ans;
}

int main(){
	/*
	int dig, pow;
	cin >> dig>>pow;
	int ans=1;
	for(int i=0; i<pow; i++){
		ans = ans * dig;
	}
	cout << ans;
	*/
	int n,a;
	cin >> a >> n ;
	cout << power_optimised(a,n) <<endl;

}