#include<iostream>
using namespace std;

void printFactors(int n){
	for(int i=2; i*i<=n;i++){
		if(n%i==0){
			//keep on dividing it by i till it is divisible
			while(n%i==0){
				
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	printFactors(n);


	return 0;
}