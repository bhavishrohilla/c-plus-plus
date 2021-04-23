#include<iostream>
using namespace std;


//Scope is defined for variables
//defines how accessible a variablle is.(lifetime or visibility)
//locak scope and global scope

int x = 100; 		//Global variable
int main(){
	int x = 10;	
	for (int x=0;x<=7;x++){		//this variable x will destroy as soon as the loop ends.
		cout<<"Loop Scope"<<x<<endl; 
	}
	cout<<"Local X - "<< x <<endl;
	cout<<"Global X - "<< ::x <<endl;;		//Scope resolution operator gives the global variable


	return 0;
}