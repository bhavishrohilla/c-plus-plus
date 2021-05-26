#include<iostream>
using namespace std;

int main(){
	char a[][5] = {{'a','b','c','\0'},{'d','e','f','\0'}};
	cout<<a[1]<<endl;
	cout<<a[0]<<endl;
}