#include<iostream>
#include<queue>
using namespace std;

//Implementing a stack using 2 queues
template<typename T>
class Stack{
	queue<T> q1,q2;
public:
	void push(T x){
		q1.push(x);		
	}
	void pop(){
		if(q1.empty()){
			return;
		}
		while(q1.size()>1){
			
		}
	}
	int top(){

	}
};

int main(){




	return 0;
}