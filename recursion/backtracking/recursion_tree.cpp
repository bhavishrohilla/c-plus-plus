#include<iostream>
using namespace std;

void permute(char*in, int i){
	//base base
	if(in[i]=='\0'){
		cout<<in<<endl;
		return;
	}
	//rec case
}

int main(){

	char in[100];
	cin >> in;
	permute(in,0);

	return 0;
}