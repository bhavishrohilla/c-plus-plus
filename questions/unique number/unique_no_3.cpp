#include<iostream>
using namespace std;

int main(){
	int cnt[64] = {0};
	int n,no;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>no;
		//Update cnt array w=by extracting bits
		int j=0;
		while(no>0){
			int last_bit = (no&1);
			cnt[j] += last_bit;
			j++;
			no = no>>1;
		}
	}

}