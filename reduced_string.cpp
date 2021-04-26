#include<iostream>
using namespace std;

int main(){


	char ch;
	ch = cin.get();

	int x=0;
	int y=0;
	char ans;

	while(ch!='\n'){
		if(ch=='N' or ch=='n'){
			y++;
		}
		else if(ch=='S' or ch=='s'){
			y--;
		}
		else if(ch=='E' or ch=='e'){
			x++;
		}
		else{
			x--;
		}
		ch = cin.get();
	}
	if(x>0){
		for(int i=0;i<=x;i++){
			cout<<'E';
		}
	}
	else if(x<0){
		for(int i=0;i<=x;i++){
			cout<<'W';
		}
	}
	if(y>0){
		for(int j=0;j<=y;j++){
			cout<<'N';
		}
	}
	else if(y<0){
		for(int j=0;j<=y;j++){
			cout<<'S';
	}
	}
	
}