#include<iostream>
using namespace std;

int main(){
	int ch;
	int alphabets = 0;
	int digits = 0;
	int spaces = 0;
	int others = 0;
	ch=cin.get();

	while(ch!='$'){
		if(ch>='0' and ch<='9'){
			digits++;
		}
		else if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z')){
			alphabets++;
		}
		else if(ch==' ' or ch=='\n' or ch=='\t'){
			spaces++;
		}
		else{
			others++;
		}
		ch = cin.get();
	}
	cout<<"Digits "<<digits<<endl;
	cout<<"alphabets "<<alphabets<<endl;
	cout<<"spaces "<<spaces<<endl;
	cout<<"others "<<others<<endl;


}