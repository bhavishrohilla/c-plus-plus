#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n == 1){
		return false;
	}
	if(n == 2){
		return true;
	}
	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void prime_seive(int *p){
	//first mark all odd numbers prime
	for(int i=3; i<=1000000; i+=2){
		p[i] = 1;
	}
	//Sieve
	for(long long i=3; i<=1000000; i+=2){
		//if the current number is not marked(it is prime)
		if(p[i]==1){
			//mark all the multiples of i as not prime
			for(long long j=2*i; j<=1000000; j=j+i){
				p[j] = 0;
			}
		}
	}
	//special case
	p[2] = 1;
	p[1] = p[0] = 0;
}

int main(){

	int n;
	cin >> n;
	int p[1000005] = {0};
	prime_seive(p);

	//lets print primes upto range
	for(int i=0; i<=n; i++){
		if(p[i]==1){
			cout << i << " ";
		}
	}

	return 0;
}