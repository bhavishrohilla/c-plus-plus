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
			temp[k] = a[i];
		}
		else{
			temp[k] = a[j];
		}
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
	mergeSort(s,mid);
	mergeSort(mid+1,e);

	//Merge two parts
}

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}


	return 0;
}