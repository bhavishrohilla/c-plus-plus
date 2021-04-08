#include<iostream>
using namespace std;

int main() {
	int no;
	int N; 
	cin>>N;

	while(N>0){
		cin>>no;
		int ans=0;
		int p=1;
		while(no>0){
			int r=no%10;
			ans = ans+r*p;
			p = p*2;
			no = no/10;
		}
	cout<<ans<<endl;
	N=N-1;
	}



	return 0;
}