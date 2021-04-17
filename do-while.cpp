#include<iostream>
using namespace std;

int main(){
	int cliff_end;
	cin>>cliff_end;
	int x = 0;

	//do-while loop is executed atleast once 
	//drawback - exit controlled loop doesnot check for the init condition is true or false
	do{
		x = x  +1; //updating condition
		cout<<"Taking 1 step and reaching :"<<x<<endl;
	}
	while(x<cliff_end);
	do{
		cout<<"At the edge of the cliff"<<endl;
		break;
	}
	while(x=cliff_end);



	return 0;
}