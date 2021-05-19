#include<iostream>
using namespace std;

bool compare(int a, int b){
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a>b;

}

void bubbleSort(int a[], int n, bool (&cmp)(int a, int b)){
	//N-1 large elements end up to the last
	for(int i=1; i<=n-1; i++){
		for(int j=0; j<=(n-i-1); j++){ //We can run the loop(swapping the bigger and smaller) till n-1 but to save the computation time we should not check for already sorted array
			//Pairwise swapping elements of unsorted array
			if(compare(a[j] , a[j+1])){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){
	int n;
	cout<<"Size of Array- ";
	cin>>n;
	cout<<"Enter "<<n<<" elements "<<endl;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	bubbleSort(a,n, compare);
	for(int x=0; x<n; x++){
		cout<<a[x]<<", ";
	}
}