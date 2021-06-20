#include<iostream>
using namespace std;

#define ll long long

int main(){
	ll t;
	cin >> t;
	ll primes[] = {2,3,5,7,11,19};
	while(t--){
		ll n;
		cin >> n;

		ll subsets = (1<<8)-1;
		for(ll i=1; i<=subsets; i++){
			ll denom = 1ll;
			ll setBits = __builtin_popcount(i);


		}



	}



	return 0;
}