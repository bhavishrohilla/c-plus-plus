#include<iostream>
#include<algorithm>
using namespace std;

//Declare a comparator
bool compare(int a, int b){
	return a > b;
}

int main(){

	//In decreasing order
	 int n,key;
	 cout << "No. of elements you have to input - "; 
	 cin >> n;
	 int a[1000];
	 for(int i=0; i<n; i++){
	 	cin >> a[i];
	 }
	 //Sort an array using sort function
	 sort(a, a+n, compare);

	 for(int i=0; i<n; i++){
	 	cout << a[i] << " ";
	 }

}