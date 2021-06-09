#include<iostream>
using namespace std;

void increment(int *aptr){
		*aptr = *aptr + 1;
		cout << "Inside function : " << *aptr << endl;

}

int main(){
	int a = 10;
	increment(&a);
	cout << "Inside main : " << a <<endl;


	return 0;
}