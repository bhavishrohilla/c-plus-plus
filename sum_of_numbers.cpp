#include<iostream>
using namespace std;

int main() {
	int n;
	//Take Input
	cin>>n;
	//Init Condition
	int i = 1;
	int sum = 0;

	while(i<=n){
		sum = sum+i;
		i = i+1;
	}
	cout<<sum<<endl;

	return 0;
}