#include<iostream>
using namespace std;

//for loop has more consized syntax
//entry controlled loop
//for(init ; stop; update)
int main(){
	int cliff_end = 10;
	int x;
	for(x=0; x<cliff_end; x=x+1){
		cout<<"Taking 1 step reaching : "<<x+1<<endl;
	}



	return 0;
}