#include<iostream>
using namespace std;

int main(){
	int cliff_end;
	cin>>cliff_end;
	int x = 0;
	do{
		x = x+1;
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