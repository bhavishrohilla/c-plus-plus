#include<iostream>
using namespace std;

int fibonacci(int n){
	int c=0;
	int a = 0;
	int b = 1;
	for(int i=1; i<=n-2; i++){
		c = a+b;
		a=b;
		b=c;
	}
	return c;
}

int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n);

}