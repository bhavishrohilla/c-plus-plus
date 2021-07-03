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

bool numericCompare(pair<string,string> s1, pair<string,string> s2){
	
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
	pair<string,string> strPair[100];
	for(int i=0; i<n; i++){
		strPair[i].first = a[i];
		strPair[i].second = extractStringAtKey(a[i],key);
	}
	//Need to sort
	if(ordering == "numeric"){
		sort(strPair,strPair+n,numericCompare);
	}
	else{
		sort(strPair, strPair+n, lexicoCompare);
	}


	return 0;
}