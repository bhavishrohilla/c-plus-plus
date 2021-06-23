#include<iostream>
using namespace std;

void allOccur(int *a, int i, int n, int key){
	if(i==n){
		return;
	}
	if(a[i]==key){
		cout << i << ",";
	}
	allOccur(a, i+1, n, key);
}

int lastOccur(int *a, int n, int key){
	//base case
	if(n==0){
		return -1;
	}
	int i = lastOccur(a+1, n-1, key);
	 if(i==-1){
	 	if(a[0]==key){
	 		return 0;
	 	}
	 	else{
	 		return -1;
	 	}

	 }
	 //otherwise if i returned by subproblem is -1
	 return i+1;
}

int firstOccur(int a[], int n, int key){
	if(n==0){
		return -1;
	}
	//rec case
	if(a[0] ==key){
		return 0;
	}
	int i = firstOccur(a+1, n-1,key);
	if(i==-1){
		return -1;
	}
	return i+1;
}

//alternate of same fn
int linearSeach(int *a, int i, int n, int key){
	//base case
	if(i==n){
		return-1;
	}
	//rec case
	if(a[i] == key){
		return i;
	}
	return linearSeach(a, i+1, n, key);
}

int main(){
	int arr[] =  {1,2,3,7,4,5,6,7,10};
	int key = 7;
	int n = sizeof(arr)/sizeof(int);

	cout <<" First Occurence - "<< firstOccur(arr, n, key)<<endl;
	cout << " Last Occurence - " <<lastOccur(arr, n ,key);
	allOccur(arr ,0,n,key);
	return 0;
}