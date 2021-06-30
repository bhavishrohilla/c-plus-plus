#include<iostream>
#include<climits>
using namespace std;

int profit(int N, int C, int *wt, int *prices){
	//base case
	if(N==0||C==0){
		return 0;
	}
	//rec
	int ans = 0;
	int inc,exc;
	inc = exc = 0;
	//include
	if(wt[N-1]<=C){
		inc = prices[N-1] + profit(N-1,C-wt[N-1],wt,prices);
	}
	//exclude
	exc = profit(N-1,C,wt,prices);
	ans = max(inc,exc);
	return ans;
}

int main(){

	int weights[] = {1,2,3,5};
	int prices[] = {40,20,30,100};
	int N = 4;
	int C = 7;
	cout << profit(N,C,weights,prices);

	return 0;
}