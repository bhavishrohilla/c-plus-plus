#include<iostream>
#include<vector>
using namespace std;

class MinMaxStack{
	vecor<int> stack;
	vector<int> min_stack;
	vector<int> max_stack;

public:

	void push(int data){
		int current_min = data;
		int current_max = data;

		if(min_stack.size()){
			current_min = min(min_stack[min_stack.size()-1,data]);
			current_max = max(max_stack[max_stack.size()-1,data]);
		}
	}
	int top(){

		return stack[stack.size()-1];
	}
}

int main(){



	return 0;
}