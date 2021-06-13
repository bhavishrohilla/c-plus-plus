#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int arr[] = {20,30,40,40,40,40,50,60,100};
	int n = sizeof(arr)/sizeof(n);

	//Search in a sorted array
	int key;
	cin >> key;

	bool present = binary_search(arr, arr+n, key);
	if(present){
		cout << "Present";
	}
	else{
		cout << "Absent";
	}
	cout << endl;
	//Two more things
	//Get the index of the element
	//lower bound(s,e,key) and upper bound(s,e,key)
	

	//Lower bound
	auto lb = lower_bound(arr, arr+n, 40);
	cout <<"Lower bound of 40 is "<<(lb-arr)<< endl;

	//Upper bound
	auto ub = upper_bound(arr, arr+n, 40);
	cout <<"Upper bound of 40 is "<< (ub-arr) << endl;

	//NO. of occurences of 40;
	cout<< "No of occurences of 40 is " << (ub-lb) << endl;

	return 0;
}