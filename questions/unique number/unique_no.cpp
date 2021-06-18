#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100005];
	int res = 0;
	int no;
	for(int i=0; i<n; i++){
		cin >> no;
		a[i] = no;
		res = res^no;
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

	int mask = (1 << pos);
	//find those no which contain set bits at postion pos
	for(int i=0; i<n; i++){
		if((a[i]&mask) > 0){
			x = x^a[i];
		}
	}
	y = res^x;

	cout << min(x,y)<< "," << max(x,y);



	return 0;
}