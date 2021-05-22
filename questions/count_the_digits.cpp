#include<iostream>
using namespace std;

int main(){
	long long int no,key;
	cin>>no;
	cin>>key;
	int cnt = 0;
	while(no>0){
		int ans = no%10;
		if(ans == key){
			cnt++;
		}
		no= no/10;
	}
	cout<<cnt<<endl;


	return 0;
}