#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Size of array - ";
	cin>>n;
	int ar[n];
	for(int i=0; i<n-1; i++){
		cin>>ar[i];
	}
	for(int i=0; i<n-1; i++){
		int j;
		for(j=2; j<(ar[i]-1); j++){
			if(ar[i]%j==0){
				break;
			}
		}
		if(j==ar[i]){
			cout<<ar[i]<<" at index - "<<i<<endl;
		}
	}
	return 0;
}