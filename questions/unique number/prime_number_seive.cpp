#include<iostream>
using namespace std;

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