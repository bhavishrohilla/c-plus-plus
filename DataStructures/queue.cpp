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
	~Queue(){

	}
};

int main()
{
	
	return 0;
}