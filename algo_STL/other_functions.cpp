#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int a = 10;
	int b = 20;

	swap(a,b);
	cout << a << " and " << b;
	cout << endl;

	cout << min(a,b) << endl;
	cout << max(a,b) << endl;

	int arr[] = {1,2,3,4,5,6};
	reverse(arr, arr+4);
	int n = sizeof(arr)/sizeof(int);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
