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

int convertToInt(string s){
	int ans = 0;
	int p =1;
	for(int i=s.length()-1; i>=0; i--){
		ans += ((s[i]-'0')*p);
		p = p*10;
	}
	return ans;
}

bool numericCompare(pair<string,string> s1, pair<string,string> s2){ string
	key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return convertToInt(key1) < convertToInt(key2);
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