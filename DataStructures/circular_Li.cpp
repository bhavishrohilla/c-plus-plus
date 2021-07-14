#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*next;

	//comstructor
	node(int d){
		data = d;
		next = NULL;

	}
};

void insert(node*head, int data){
	node* n = new node(data);
	node*temp = head;

	n->next = head;
	if(temp!=NULL){
		while(temp->next!=head){
			temp = temp->next;
		}

		temp->next = n;
	}
	head = n;
}
void print(node*head){
	node*temp = head;
	//for all nodes except last one
	while(temp->next!=head){
		cout << temp->data<<" ";
		temp = temp->next;
	}
	cout << temp->data;
	return;
}

//delete node in circular ll
node*getnode(node*&head, int data){
	node*temp = head;
	while(temp->next!=head){
		if(temp->data==data){
			return temp;
		}
		temp = temp->next;
	}

	//out of the loop
	if(temp->data=data){
		return temp;
	}
	return NULL;
}
void deleteNode(node*head, int data){
	node* del = getnode(head, data);
	if(del==NULL){
		return;
	}
	
}
 
int main(){

	node*head = NULL;
	insert(head,10);
	insert(head,20);
	insert(head,30);
	insert(head,40);
	insert(head,50);
	insert(head,60);
	return 0;
}