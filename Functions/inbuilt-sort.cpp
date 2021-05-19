#include<iostream>
#include<algorithm> //includes inbuilt sorting functions already
using namespace std;

//Defining a comparator
bool compare(int a, int b){
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a>b;
}

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

	sort(a,a+n+1, compare); //compare changes it to Decreasing order(Function as a parameter in function)
	for(int x=0; x<n; x++){
		cout<<a[x];
	}

}