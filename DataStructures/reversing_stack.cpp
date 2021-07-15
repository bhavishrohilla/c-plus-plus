#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int x){
	//base case
	
}

void reverseStrack(stack<int> &s){
	//base case
	if(s.empty()){
		return;
	}

	//otherwise
	//pop out the top element and it at the bottom of the "reversed smaller stack"
	int x = s.top();
	s.pop();

	//rec remove the smaller stack
	reverseStrack(s);
	insertAtBottom(s,x);

}

int main(){

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	return 0;
}