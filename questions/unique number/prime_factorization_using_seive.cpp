#include<iostream>
#include<vector>
using namespace std;

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