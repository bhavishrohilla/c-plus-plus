#include<iostream>
using namespace std;

void generate_strings(char *in, char *out, int i, int j){
	//base case
	if(in[i] == '\0'){
		out[j] == '\0';
		cout << out << endl;
		return;
	}

	//rec case
	//one digit at a time
	int digit = in[i] - '0';
	char ch = digit + 'A' -1;
	out[j] = ch;
	generate_strings(in,out,i+1,j+1);

	//two digit at a time
}

int main(){

	char a[100];
	cin >> a;

	char out[100];


	return 0;
}