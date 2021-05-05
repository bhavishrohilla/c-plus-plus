#include<iostream>
using namespace std;

int main(){
	//Switch case 
	//Design a menu where pressing a button gives  you the corresponding item
	char ch;
	cin>>ch;

	switch(ch){
		case 'b':
		case 'B' : cout<<"Burger"<<endl;
			break;
		case 'm':
		case 'M' : cout<<"Maggi"<<endl;
			break;
		case 
		case 'P' : cout<<"Pizza"<<endl;
			break;
		default  : cout<<"Item Not Available! Please make at your own.";
	}


}