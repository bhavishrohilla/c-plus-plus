#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"What should be the size of the array - ";
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	int a[n];
	//Input the elements in array
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	cout<<"Which element you need to search? - " ;
	int key;
	cin>>key;
	int i;
	for(i=0; i<n; i++){
		if(a[i]==key){
			cout<<"The key "<<key<<" is at the index "<<i<<endl;
			break;
		}
	}
	if(a[i]!=key){
		cout<<key<<" is not present in the list";
	}
}