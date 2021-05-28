#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
	if(a.length()==b.length()){
		return a<b;		//lexiographical comaprison in strings
	}
	return a.length()>b.length();
}

int main(){
	int n;
	cin>>n;
	cin.get();
	string s[100]; //Vector
	for(int i=0; i<n; i++){
		getline(cin, s[i]);
	}
	sort(s,s+n, compare);
	for(int i=0; i<n; i++){
		cout<<s[i]<<endl;
	}



	return 0;
}