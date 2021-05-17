#include<iostream>
#include<algorithm> //includes inbuilt sorting functions already
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int x=0; x<n; x++){
		cin>>a[x];
	}
	sort(a,a+n+1);
	for(int x=0; x<n; x++){
		cout<<a[x];
	}

}