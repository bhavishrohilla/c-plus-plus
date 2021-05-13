#include<iostream>
using namespace std;

int fibonacci(int n){
	int a =0;
	int b =1;
	int c;
	cout<<a<<" ";
	cout<<b<<" ";
	for(int i=1; i<=n-2;i++){
		c =a+b;
		cout<<c<<"hogya"<<" ";
		a=b;
		b=c;
	}
	
}

int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
}