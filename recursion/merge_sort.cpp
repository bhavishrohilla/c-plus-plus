#include<iostream>
using namespace std;

void merge(int *a, int s, int e){
	int mid = (s+e)/2;
	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[100];
	while(s<=mid && j<=e){
		if(a[i]<a[j]){
			temp[k++] = a[i++];
		}
		else{
			temp[k++] = a[j++];
		}
	}
	while(i<=mid){
		temp[k++] = a[i++];
	}
	while(j<=e){
		temp[k++] = a[j++];
	}
	//We need to copy all elements to originl array
	for(int i=s; i<=e; i++){
		a[i] = temp[i];
	}
}

void mergeSort(int a[], int s, int e){
	if(s>=e){
		return;
	}
	//Follow 3 steps
	//1. Divide
	int mid= (s+e)/2;

	//Recusrsively sort arrays -> s to mid and mid+1 to e
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	//Merge two parts
	merge(a,s,e);
}

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for(int i=0; i<n; i++){
		cout<<a[i]<<",";
	}

	return 0;
}