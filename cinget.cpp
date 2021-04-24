#include<iostream>
using namespace std;

int main(){
	char ch;
	ch=cin.get();	//this method will read any single character including spaces/new lines unlike the cin method
	while(ch!='.'){
		cout<<ch;
		ch=cin.get();
	}


}