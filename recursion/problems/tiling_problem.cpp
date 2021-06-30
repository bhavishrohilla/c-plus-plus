#include<iostream>
using namespace std;

void generate_subsequennce(char *in, char *out, int i, int j){
	//base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout << out << endl;
		return;

	}
	//rec case
	//include the current char
	out[j] = in[i];
	generate_subsequennce(in,out,i+1,j+1);

	//exclude the current char
	generate_subsequennce(in,out,i+1,j);

}

int main(){
	char input[] = "abc";
	char output[10];
	generate_subsequennce(input,output,0,0);

	return 0;
}