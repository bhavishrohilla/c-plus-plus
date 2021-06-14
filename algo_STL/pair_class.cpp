#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	pair<int,char> p;
	p.first = 10;
	p.second = 'B';
	cout << p.first<<endl;
	cout << p.second << endl;

	//Another way
	pair<int,char> p2(p);

	cout << p2.first<<endl;
	cout << p2.second << endl;

	pair<int,string> p3 = make_pair(100,"Audi");
	cout<< p3.first << " " << p3.second << endl;
	return 0;
}