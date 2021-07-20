#include<iostream>
#include<deque>
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

	node * root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void print(node *root){
	cout << root->data<<" ";
	print(root->left);
	print(root->right);
}

void printIn(node*root){
	if(root==NULL){
		return;
	}
	//Oterwise Left Root Right
	printIn(root->left);
	cout << root->data<<" ";
	printIn(root->right);
}
void printPost(node*root){
	if(root==NULL){
		return;
	}
	//Oterwise Left Root Right
	printPost(root->left);
	printPost(root->right);
	cout << root->data<< " ";
}

int main(){
	node *root = buildTree();
	print(root);
	cout << endl;

	printIn(root);
	printPost(root);

	return 0;
}


/*
	/s/19425
*/