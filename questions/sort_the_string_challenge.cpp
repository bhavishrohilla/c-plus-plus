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
	return(string)s;
}

int main(){

	string s("10 20 30 40 50");
	int key;
	cin >> key;
	cout << extractStringAtKey(s, key);
	/*
	int n;
	cin.get();
	string a[100];
	for(int i=0; i<n; i++){
		getline(cin,a[i]);
	}

	int key;
	string reversal,ordering;
	*/

	return 0;
}