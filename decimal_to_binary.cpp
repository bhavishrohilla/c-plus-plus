#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	int ans=0;
	int p=1;
	while(n>0){
		int r=n%10;
		ans = ans+r*p;
		p = p*2;
		n = n/10;
	}
	cout<<ans<<endl;



	return 0;
}