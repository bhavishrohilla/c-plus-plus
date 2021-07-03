#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;

int bubbleSort(int a[], int n){
	//N-1 large elements end up to the last
	for(int i=1; i<=n-1; i++){
		for(int j=0; j<=(n-i-1); j++){ //We can run the loop(swapping the bigger and smaller) till n-1 but to save the computation time we should not check for already sorted array
			//Pairwise swapping elements of unsorted array
			if(a[j]>a[j+1]){
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

	time_t start = clock();
	bubbleSort(a,n);
	time_t end = clock();

	cout << "Bubble sort " << end-start << endl;
	for(int x=0; x<n; x++){
		a[x] = n-x;
	}

	start = clock();
	sort(a,a+n);
	end = clock();

	cout << "Merge sort " << end-start << endl;

	return 0;
}