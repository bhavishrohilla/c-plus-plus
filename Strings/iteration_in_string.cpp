#include<iostream>
using namespace std;

int main()
{
	string s = "I want to have some mango shake.";
	for(int i=0; i<(s.length()); i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;

	//Iterators

	for(string::iterator it =s.begin(); it!=s.end(); it++){		//We can write 'auto' instead of 'string::iterator'
		cout<<(*it)<<",";
	}
	cout<<endl;
	//For Each Loop

	for(char c:s){
		cout<<c<<".";
	}

	return 0;
}
