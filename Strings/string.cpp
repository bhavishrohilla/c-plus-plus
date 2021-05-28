#include<iostream>
using namespace std;

int main(){
	//string init
	string s0;
	string s1("Hello World!");
	string s3 = "Hello World!";
	string s4(s3);
	string s2 = s4;

	char a[] = {'a', 'b', 'c','\0'};
	string s5(a);
	cout<<s0;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	if(s0.empty()){
		cout<<"s0 is empty"<<endl;
	}

	//Append
	s0.append("I like C++");
	cout<<s0<<endl;

	s0 += " and Python";
	cout<<s0<<endl;

	//Remove
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;

	//Comparing Two Strings
	string a1 = "Mango";
	string a2 = "Watermelon";
	cout<<a1.compare(a2)<<endl;	//Returns an integer value either 0 or no zero. 
}