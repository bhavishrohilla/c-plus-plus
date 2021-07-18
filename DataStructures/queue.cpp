#include<iostream>
using namespace std;

class Queue{
	int *arr;
	int f,r,cs,ms;
public:
	Queue(int ds=5){
		arr = new int[ds];
		cs = 0;
		ms = ds;
		f =0;
		r = ms-1;
	}
	bool full(){
		return cs == ms;
	}

	void push(int data){
		if(!full()){
			r = (r+1)%ms;
			arr[r] = data;
			cs++;
		}
	}
	~Queue(){

	}
};

int main()
{
	
	return 0;
}