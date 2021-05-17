#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
	for(int i=1; i<=n-1; i++){
		int e = arr[i];
		int j= i-1;
		while(j>=0 and arr[j]>e){
			arr[j+1]=arr[j];
			j = j - 1;
		}
		arr[j+1] = e;
	}
}

int main(){
	int n;
	cout<<"Size of Array- ";
	cin>>n;
	cout<<"Enter "<<n<<" elements "<<endl;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	selectionSort(arr,n);
	for(int x=0; x<n; x++){
		cout<<arr[x]<<", ";
	}
}