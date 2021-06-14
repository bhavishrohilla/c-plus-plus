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
	
	//Take input
	int x,y;
	cin >> x >> y;
	pair<int,int> p4 = make_pair(x,y);
	cout << p4.first <<" "<<p4.second;
	cout << endl;
	//Array of pairs
	//Vector of pairs
	pair<pair<int,int>,string> car;
	car.first.first = x;
	car.second = "Mercedes";
	car.first.second = y;
	cout << car.second << " went from "<<car.first.first << " to " << car.first.second;


	return 0;
}