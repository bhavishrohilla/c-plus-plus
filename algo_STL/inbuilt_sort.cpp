#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	 int n,key;
	 cout << "No. of elements you have to input - "; 
	 cin >> n;
	 int a[1000];
	 for(int i=0; i<n; i++){
	 	cin >> a[i];
	 }
	 //Sort an array using sort function
	 sort(a, a+n);

	 for(int i=0; i<n; i++){
	 	cout << a[i] << " ";
	 }

}