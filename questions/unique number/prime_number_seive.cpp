#include<iostream>
using namespace std;

void prime_seive(int *p){
	//first mark all odd numbers prime
	for(int i=3; i<=1000000; i++){
		p[i] = 1;
	}
	//Sieve
	for(ll i=3; i<=1000000; i+=2){
		//if the current number is not marked
	}
}

int main(){

	int n;
	cin >> n;
	int p[1000005] = {0};
	prime_eive(p);
	for(int i=0; i<=n; i++){
		if(p[i]==1){
			cout << i << " ";
		}
	}
}