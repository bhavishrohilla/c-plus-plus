#include<iostream>
using namespace std;

int main(){
	int steps;
	steps = cin.get();
	int valley = 0;
	int times = 0;
	while(steps!='\n'){
		if(steps=='U' or steps=='u'){
			valley--;
		}
		else if(steps=='D' or steps=='d'){
			valley++;
		}
			if(valley<0){
				times = times+1;
			}
		steps = cin.get();
	}
	cout<<times;



}