#include<iostream>
using namespace std;

int main(){
	//we can update a value
	char c[10][10];
	c[0][1] = 'A';
	char b[][5] = {{'a','b','c','\0'},{'d','e','f','\0'}};
	char a[][10] = {"abc","def","hello"};
	cout<<a[1]<<endl;
	cout<<a[0]<<endl;
	cout<<a[2]<<endl;
}