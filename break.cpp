#include<iostream>
using namespace std;

int main(){
	//Break- used to stop a loop based upon certain conditions
	int n;

	while(true){
		//No stopping condition as of now
		cin>>n;
		if(n%7==0){
			break; //Breaks the loop and takes you out of the loop
		}
		cout<<"No. "<<n<<endl;
	}
	cout<<"Came out of the loop";

	return 0;
}