#include<iostream>
#include<vector>
using namespace std;

vector<int> primeSeive(int *p, int n){
	p[0] = p[1] = 0;
	p[2] = 1;

	//Let us mark all odd numbers as prime
	for(int i=3; i<=n; i+=2){
		p[i] = 1;
	}

	//Seive login to mark non prime numbers as zero
	//1. Optimization - Iterate only over odd numbers
	for(int i=3; i<=n; i+=2){
		if(p[i]){
			//Mark all the multiples of that number as not prime
			for(int j=i*i; j<=n; j+= 2*i){
				p[j] = 0;
			}
		}
	}
	vector<int> primes;
	primes.push_back(2);
	for(int i=0; i<=n; i+=2){
		if(p[i] == 1){
			primes.push_back(i);
		}
	}
	return primes;
}

int main(){
	/* code */
	int N = 1000000;
	int p[N] = {0};
	vector<int> primes = primeSeive(p,100);
	int t;
	cin>>t;
	while(t--){
		int no;
		cin>>no;
		vector<int> factors = factorize(no, primes);
		for(auto f : factors){
			cout << f << " "<<endl;
		}
	}


	return 0;
}