#include<iostream>
using namespace std;

int main(){
	long long int no;
	cin>>no;
	while(no>0){
		int ans = no%10;
		cout<<ans;
		no= no/10;
	}


	return 0;
}