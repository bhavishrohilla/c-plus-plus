#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int arr[] = {1,10,11,9,100};
	int n = sizeof(arr)/sizeof(int);
	//Search --> Find
	int key;
	cout << "Enter the key to be searched - ";
	cin >> key;
	auto it = find(arr, arr+n, key);
	int index = it - arr;
	if(index==n){
		cout << key << " is not present";
	}
	else{
		cout << "Present at "<< index << endl;
	}
}

/*
If the key is not present in the array, c++ assumes it to be on the index n
*/