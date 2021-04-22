#include<iostream>
using namespace std;

int main(){
	//Break- used to stop a loop based upon certain conditions
	int n;

	while(true){
		//No stopping condition as of now
		cin>>n;
		if(n%7==0){
			continue; //continues the loop 
		}
		cout<<"No. "<<n<<endl;
	}

	return 0;
}