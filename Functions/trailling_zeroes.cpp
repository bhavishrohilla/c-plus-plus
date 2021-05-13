#include<iostream>
using namespace std;

int findZeroes(int n){
	int ans=0;
	for(int D=5; n/D>0; D*=5){
		ans+=n/D;	//if n=100,	[ (100/5) + (100/25) + (100/125) ] because ultimately occurence of 5 is responsible for no. of zeroes.
	}
	return ans;

}

int main(){
	long long int n;
	cin>>n;
	cout<<findZeroes(n)<<endl;
}