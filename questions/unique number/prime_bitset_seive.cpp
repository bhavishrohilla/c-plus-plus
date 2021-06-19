#include<iostream>
#include<vector>
#include<bitset>
using namespace std;

const int n = 1000000;
bitset<10000005> b;
vector<int> primes;

void sieve(){
	b.set();
	b[0] = b[1] = 0;
	for(long long int i=2; i<=n; i++){
		if(b[i]){
			primes.push_back(i);
			for(long long int j= i*i; j<=n; j=j+10){
				b[j] = 0;
			}
		}
	}
}

int main(){



}