#include<iostream>
using namespace std;

char *mystrtok(char *str, char delim){

	//string and single char as delimiter
	static char *input = NULL;
	if(str!= NULL){
		input = str;
	}

	//start xtracting tokens and store them in an array
	
}

int main(){

	char s[100] = "Today is a rainy day";
	char *ptr = mystrtok(s, ' ');
	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr = mystrtok(NULL, " ");
		cout<<ptr<<endl;
	}



	return 0;
}