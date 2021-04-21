#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int max_so_far = INT_MIN;
	int min_so_far = INT_MAX;
	int no;
	for(int i=0; i<n; i++){
		cin>>no;
		if(no>max_so_far){
			max_so_far = no;
		}
		if(no<min_so_far){
			min_so_far = no;
		}
	}
	cout<<"Max NO."<<max_so_far<<endl;
	cout<<"Min No."<<min_so_far<<endl;


	return 0;
}