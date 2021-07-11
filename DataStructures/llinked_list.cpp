#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	//constructor
	node(int d){
		data = d;
		next = NULL;
	}
};

//Linked list
/*
class LinkedaList{
	node*head;
	node*tail;
public:
	LinkedaList(){

	}
	void insert(int d){

	}
	...
	...
};
*/

//Functions
void build(){

}
//Passing a pointert by reference
void insertAtHead(node*&head, int d){
	if(head==NULL){
		head = new Node(d);
		return;
	}

	Node *n = new Node(d);
	n->next = head;
	head = n;
}

void print(node*head){
	while(head!=NULL){
		cout << head->data<<"->";
		head = head->next;
	}
}

int main(){

	node*head = NULL;
	insertAtHead(head,3);
	insertAtHead(head,2);
	insertAtHead(head,1);
	insertAtHead(head,0);

	print(head);

}
	





