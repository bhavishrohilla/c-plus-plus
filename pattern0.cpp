#include<iostream>
using namespace std;

int main(){
	int input;
	cin>>input; 
	int row = 1;
	int col = 1;
	while(row<=input){
		while(col<=row){
			cout<<input;
			col=col+1;
		}
		cout<<input<<endl; 
		row = row+1; 
	}
	return 0;
}