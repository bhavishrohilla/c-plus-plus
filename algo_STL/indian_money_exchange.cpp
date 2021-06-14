#include <iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	return a<=b;
}

int main(){
	int currency[] = {1,2,5,10,20,50,100,200,500,2000};
	int n = sizeof(currency)/sizeof(int);
	int money = 100;

	while(money>0){
		int lb = lower_bound(currency, currency+n, money, compare)-currency-1;
		int m = currency[lb];
		cout << m << ",";
		money = money - m;
	} 
}