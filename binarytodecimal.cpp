#include<iostream>
using namespace std;

int main() {
	int no;
	int N; 
	cin>>N; //the no. of binary digits input

	while(N>0){
		cin>>no;  //the binary digits input
		int ans=0;  //the sum of the digits should be 0 initially
		int p=1;  // raise to the power  means 2 raise to the power 0 = 1
		while(no>0){
			int r=no%10;
			ans = ans+r*p;
			p = p*2;   // the power is inceremented by raise to the power 2, For eg. 1,2,4,8,16,32
			no = no/10; // to discard the last digit like 101/10= 10 now the work is further done on 0
		}
	cout<<ans<<endl;
	N=N-1; //to end the loop eg. if N=4 it means there will total 4 binary no.s and after every one cycle N will become decremented by 1 i.e 3,2,1
	}



	return 0;
}