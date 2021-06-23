#include <iostream>
using namespace std;

void bubble_sort(int a[], int n){
	//base case
	if(n==1){
		return;
	}

	//recursion case
	//after you have moved the largest element in the current part to the end of the array by pairwise swapping
	for(int j=0; j<n-1; j++){
		if(a[j] > a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	bubble_sort(a,n-1);
}

void bubbleSortAlt(int a[], int j, int n){
	//base case
	if(n==1){
		return;
	}
	if(j==n-1){
		//single pass of the current array has been done
		return bubbleSortAlt(a, 0, n-1);
	}
	if(a[j]>a[j+1]){
		swap(a[j], a[j+1]);
	}
	bubbleSortAlt(a, j+1, n);
	return;
}

int main()
{
	int a[] = {5,4,3,1,2};
	int n = 5;
	bubble_sort(a,n);
	return 0;
}