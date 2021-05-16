#include<iostream>
using namespace std;

int selectionSort(int a[], int n){
	for(int i=0; i<n-1; i++){
		//Finding out the smallest element
		int min_index = i;
		for(int j=i;j<n-1;j++){
			if(a[j]<a[min_index]){
				min_index = j;
			}
		}
		//After finding the smallest element swap it 
		swap(a[i],a[min_index]);
	}
}
int main(){
	int n;
	cout<<"Size of array : ";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements : ";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	selectionSort(a,n);
	for(int x=0; x<n-1; x++){
		cout<<a[x]<<", ";
	}

	return 0;
}