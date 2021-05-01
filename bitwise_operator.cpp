#include<iostream>
using namespace std;

int main(){

	int a,b,c;
	a = 10;
	b = 20;
	c = 30;
	//logical operators
	if(c>a and c>b){
		cout<<"C is largest"<<endl;
	}

	//Ternary operators
	int x = c%2 == 0 ? 1 : 0 ;
	cout<<x<<endl;
	c%2==0?cout<<"not Odd":cout<<"not Even";
	cout<<endl;
	
	//Bitwise operator
}