#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=2;i<n-1;i++){
		if(n%i==0){
			cout<<n<<" is a not a prime"<<endl;
			break;
		}
		cout<<"Not a prime"<<endl;

	}


	return 0;
}