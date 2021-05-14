#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int key){
	int s = 0;
	int e = n-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return -1;
}

int main(){
	int n;
	cout<<"Size of Array - ";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int key;
	cout<<"What is the key you want to search : ";
	cin>>key;
	cout<<binarySearch(a, n, key);
}