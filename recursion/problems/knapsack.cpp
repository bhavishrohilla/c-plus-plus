#include<iostream>
#include<cmath>
using namespace std;

int profit(int N, int C, int *wt, int *prices){
	//base case
	if(N==0||C=0){
		return 0;
	}
	//rec
	int ans = 0;
	int inc,exc;
	inc = exc = INT_MIN;
	if(wt[n-1]<=C){
		inc = prices[n-1] + profit(N-1,C-wt[n-1],wt,prices);
	}
}

int main(){

	int weights[] = {1,2,3,5};
	int prices[] = {40,20,30,100};
	int N = 4;
	int C = 7;


	return 0;
}