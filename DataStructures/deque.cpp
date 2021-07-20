#include<iostream>
#include<deque>
using namespace std;

int main(){

	int n;
	int a[100000];
	int k;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cin >> k;
	deque<int> Q(k);
	for(int i=0; i<k; i++){
		while(!Q.empty() && a[i]>a[Q.back()]){
			Q.pop_back();
		}
		Q.push_back(i);
	}
	return 0;
}