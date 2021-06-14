#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int a = 10;
	int b = 20;

	swap(a,b);
	cout << a << " and " << b;
	cout << endl;

	cout << min(a,b) << endl;
	cout << max(a,b) << endl;
}