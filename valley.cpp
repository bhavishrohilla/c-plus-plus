#include<iostream>
using namespace std;

int main(){
	int steps;
	steps = cin.get();
	int y = 0;
	int times = 0;
	while(steps!='\n'){
		if(steps=='U' or steps=='u'){
			y++;
		}
		else if(steps=='D' or steps=='d'){
			y--;
		}
			if(y<0){
				times = times+1;
			}
		steps = cin.get();
	}
	cout<<times;



}