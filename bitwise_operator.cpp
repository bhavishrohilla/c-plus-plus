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
	x = 5;
	int y = 7;
	cout<<"AND "<<(x&y)<<endl;
	cout<<"OR "<<(x|y)<<endl;
	cout<<"XOR "<<(x^y)<<endl;

	//Shift operator
	cout << (x<<3) <<endl; //it will multiply x by 2 raise to the power 3 (5*8=40)
	cout << (y>>1) <<endl; //it will reduce the value of y by dividing it by 2 raise to the power 1 i.e 2 (7/2=3)

	//Address
	cout<< (&x) <<endl;

}