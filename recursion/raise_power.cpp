#include<iostream>
using namespace std;

int power(int a, int n){
	int p1 = a * power(a,n-1);
	return p1; 
}

int main(){

	int a,n;
	cin >> a >> n;
	cout << power(a,n);

}