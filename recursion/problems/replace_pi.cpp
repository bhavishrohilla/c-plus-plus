#include<iostream>
using namespace std;

void replacePi{char a[], int i}{
	//base case
	if(a[i]=='\0' or a[i+1] = "/0"){
		return 
	}
	//rec case
	//look for piu at current location
	if(a[i] == 'p' and a[i+1] == 'i'){
		//shifting 	+ replacement with 3.14
		int j = i+2;

		//take j to the end to the array
		while(a[j]!=0){
			j++;
		}
		//shifting
		while(j>i+2){
			a[j+2] = a[j];
			j--;
		}
		//replacement + recursion for the remaining part
		a[i] = '3';
		a[i+1] = '.';
		a[i+2] = '1';
		a[i+3] = '4';
	}
	else{
		//go to the position
		replacePi(a,i+1);
	}
	return;
}

int main(){


	return 0;
}