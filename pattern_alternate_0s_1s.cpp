#include<iostream>
using namespace std;
/*
-for ith line print i numbers
-odd line starts with 1 and value alters between 0 and 1
-even line starts with 0 and value alters between 0 and 1
-print n lines
n = 5
0
10
010
1010
01010
*/
int main(){
	int n ;
	cin>>n;
	for(int i=1;i<=n;i++){
		int val = i%2==0?1:0;
		for(int cnt=1;cnt<=i;cnt++){
			cout<<val;
			val = 1-val; 
		}
		cout<<endl;
	}

	return 0;
}