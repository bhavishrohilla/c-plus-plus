#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = NULL;
		right  = NULL;

	}
};
node* buildTree(){
	int d;
	cin >> d;
	if(d==-1){
		return NULL;
	}
}


int main(){


	return 0;
}