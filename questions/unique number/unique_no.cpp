#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100005];
	int res = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		res = res ^ a[i];
	}
	//Res = a^b;
	int temp = res;
	int pos = 0;
	while((temp&1)!=1){
		pos++;
		temp = temp >> 1;
	}
	//The first set bit in res is at position 'pos'
	int x = 0;
	int y = 0;
	int mask = (1 << 2);
	if((a[i] & mask)>0){

	}




	return 0;
}