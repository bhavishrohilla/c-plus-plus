#include<iostream>
using namespace std;

int main(){
	int n;
	int maxSum = 0;
	cout<<"Size of array - ";
	cin>>n;
	int a[n];
	cout<<"Write all the elements"<<endl;
	int left =-1;
	int right = -1;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int currentSum = 0;
			//Printing elements of subarray(i,j)
			for(int k=i; k<=j; k++){
				currentSum +=a[k];
			}
			//Update max sum if currsum > maxsum
			if(currentSum>maxSum){
				maxSum = currentSum;
				left = i;
				right = j;
			}
		}
	}
	//Printing the max sum
	cout<<maxSum<<endl;
	for(int x=left; x<=right; x++){
		cout<<a[x]<<", ";
	}
	return 0;
}