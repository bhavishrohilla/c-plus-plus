#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;

	//Init
	list<int> l1{1,2,3,4,5,6};

	//Different Datatypes
	list<string> l2{"apple","mango","banana"};
	l2.push_back("pineapple");

	//Iterartion
	for(auto s:l2){
		cout << s << "->";
	}
}