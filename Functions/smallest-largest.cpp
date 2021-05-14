#include<iostream>
using namespace std;
#include<climits>
int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int largest = INT_MIN;
	int smallest = INT_MAX;
	/*for(int i=0; i<n; i++){
		if (a[i]>largest)
		{
			largest = a[i];
		}
		if (a[i]<smallest)
		{
			smallest = a[i];
		}
	}*/

	//Alternate
	for(int i=0; i<n; i++){
		largest=max(largest,a[i]);
		smallest =min(smallest,a[i]); 
	}
	cout<<"largest : "<<largest<<endl;
	cout<<"smallest : "<<smallest;
}