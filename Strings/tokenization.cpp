#include<iostream>
#include<cstring>
using namespace std;

//char *strtok(char *s, char *delimiter)
//returns a token on each susequent call
//on the first call function should be passes with string arguement for 's'
//on subsequent calls we should pass string arguement as null

int main(){

	char s[100] = "Today, is a, rainy, day";

	//First we need to store the whole string....
	char *ptr = strtok(s,",");
	cout<<ptr<<endl;

	//...and then we have to pass NULL each time to fetch every word
	while(ptr!=NULL){
	ptr = strtok(NULL,",");
	cout<<ptr<<endl;
	}
}