#include<iostream>
using namespace std;

int main(){
	char a[] = {'a','b','c','d'};
	cout << a << endl;	//abcd and some garbage value
	
	char b[] = {'a','b','c','\0','d'};
	cout << b << endl;	//abc

	char c[] = {'a','b','c','d','\0'};
	cout << c << endl;	//abcd

	int d[] = {'1','2','3'};
	cout<< d << endl;	//We will get the address of the memory .
}

/*
'\0' is called null character. The line is terminated by null character in character arrays. The ASCII value of null character is 0.
*/