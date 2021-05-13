#include<iostream>
using namespace std;

int fibonacci(int n){
	int a =0;
	int b =1;
	cout<<a<<" ";
	cout<<b<<" ";
	for(int i=0; i<n;i++){
		int c =a+b;
		cout<<c<< " ";
		a=b;
		b=c;
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}