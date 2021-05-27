#include<iostream>
using namespace std;

void readline(char a[], int maxLen, char delim='$'){
	int i =0;
	char ch = cin.get();
	while(ch!=delim){
		a[i] = ch;
		i++;
		if(i==(maxLen-1)){
			break;
		}
		ch = cin.get();
	}
	a[i] = '\0';	//The null character stored in the last bucket to avoid the garbage value 
}

int main(){
	char a[1000];
	readline(a, 1000, '$');
	cout << a << endl;
}