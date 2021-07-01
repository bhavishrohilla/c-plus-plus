#include<iostream>
using namespace std;

void permute(char*in, int i){
	//base base
	if(in[i]=='\0'){
		cout<<in<<",";
		return;
	}
	//rec case
	for(int j=i; in[j]!='\0'; j++){
		swap(in[i],in[j]);
		permute(in,i+1);
		swap(in[i],in[j]);	//Backtracking -> restoring the original array
	}
}

int main(){

	char in[100];
	cin >> in;
	permute(in,0);

	return 0;
}