#include<iostream>
using namespace std;

int main() {

	int n,sum;
	cin>>n;

	sum=0; //Initially the sum will be zero when n=0

	while(n>0){  //Stopping criteria
		int last_digit = n%10;
		sum = sum + last_digit;

		//Updating Statement
		n=n/10;
	}
	cout<<"sum of digits is "<<sum<<endl;

	return 0;
}
