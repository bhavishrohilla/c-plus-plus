#include<iostream>
#include<cstring>
using namespace std;

int strToLen(char *a, int n){
	//base case
	if(n==0){
		return 0;
	}
	//rec case
	int dig  = a[n-1] - '0';
	int smallAns = strToLen(a, n-1);
	return smallAns = (smallAns*10) + dig;
}

int main(){
	//Given a string to convert it into integer
	char a[] = "1234";
	int len = strlen(a);
	int x =  strToLen(a, len);
	cout << x <<endl;
	cout << x+1 << endl;

	return 0;
}