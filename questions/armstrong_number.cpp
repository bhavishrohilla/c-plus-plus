#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int no){
	int cnt = 0;
	int dg = no;
	while(dg>0){
		dg = dg/10;
		cnt++;
	}
	int ans=0;
	int n = no;
	while(n>0){
		int r = n%10;
		ans = ans+(pow(r,cnt));
		n = n/10;
	}
	if(no==ans){
		cout<<"true";
	}
	else{
		cout<<"false";
	}

}

int main(){
	int no;
	cin>>no;
	armstrong(no);
	

	return 0;
}