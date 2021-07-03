#include<iostream>
#include<cstring>
using namespace std;

string extractStringAtKey(string str, int key){
	//strtok
	char *s = strtok((char *)str.c_str()," ");
	while(key>1){
		s= strtok(NULL," ");
		key--;
	}
}

int main(){
	int n;
	cin.get();
	string a[100];
	for(int i=0; i<n; i++){
		getline(cin,a[i]);
	}

	int key;
	string reversal,ordering;


	return 0;
}