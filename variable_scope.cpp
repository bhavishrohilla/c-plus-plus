#include<iostream>
using namespace std;


//Scope is defined for variables
//defines how accessible a variablle is.(lifetime or visibility)
//locak scope and global scope

int x = 100;
int main(){
	int x = 10;
	cout<<x<<endl;
	cout<<::x;		//Scope resolution operator gives the global variable


	return 0;
}