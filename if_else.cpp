#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	//else-if block if you want only one of the blocks to be executed
	if(n%2==0){

		cout<<n<<" is divisible by 2"<<endl;
		cout<<"if block!"<<endl;
	}

	//else if is not executed if the if block satisfies the condition
	else if(n%3==0){
		cout<<n<<"is divisible by 3"<<endl;
	}

	else{
		cout<<n<<"is not divisible"<<endl;
		cout<<"else block"<<endl;
	}



	return 0;
}