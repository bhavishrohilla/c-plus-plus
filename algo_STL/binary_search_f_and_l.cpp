#include<iostream>
#include<algorithm>
using namespace std;

int first_occurence(int a[], int n, int key){
	int s = 0;
	int e = n-1;
	int ans = -1;

	while(s<=e){
		int mid = (s+e)/2;

		if(a[mid]==key){
			//Do two Things
			ans = mid;
			e = mid - 1;
		}
		else if(a[mid]>key){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return ans;
}

int last_occurence(int a[], int n, int key){
	int s = 0;
	int e = n-1;
	int ans = -1;

	while(s<=e){
		int mid = (s+e)/2;

		if(a[mid]==key){
			//Do two Things
			ans = mid;
			s = mid + 1; //dont stop but explore the right part of the array
		}
		else if(a[mid]>key){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return ans;
}

int main(){
	int arr[] = {1,2,5,8,8,8,8,8,10,12,15,20};
	int n = sizeof(arr)/sizeof(int);
	int key;
	cin >> key;

	//First and Last Occurence of the key in sorted array
	cout << first_occurence(arr,n,key)<<endl;
	cout << last_occurence(arr,n,key)<<endl;
	return 0;
}