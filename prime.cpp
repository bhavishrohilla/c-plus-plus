#include<iostream>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	for(i=2;i<=n-1;i++){
		if(n%i==0){
			cout<<n<<" is a not a prime"<<endl;
			break;
		}
	}
	if(i==n){
		cout<<n<<" is prime"<<endl;
	}
}