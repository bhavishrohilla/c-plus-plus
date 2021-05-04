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

	//Unary Operator

	//Address of operator
	cout<< (&x) <<endl; //Here (&x) is not a bitwise operator.

	//Post Increment / Decrement
	a = 10;
	int z = a++; 	//z = 10 and a = 10+1
	cout<<z<<endl;	//10
	z = ++a;		//a = 12 , z = 12
	cout<<z<<endl;	//12

	//Compound Assignment Operator
	a = 10;
	a*=3;
	cout<<"a after multiplication "<<a<<endl;	//30
	a%=7;	
	cout<<"a after modulo "<<a<<endl;		//2

	b = 5;
	b<<=1;
	cout<<"b after right shift "<<b<<endl;	//10

}