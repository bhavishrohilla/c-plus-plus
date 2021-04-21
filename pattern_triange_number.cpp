/*
		   1
		  232
		 34543
		4567654

*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	//loop for rows 1 to n
	for (int i=1; i<=n; i++){

		//loop for spaces
		for(int space=1; space<=n-i; space++){
			cout<<" ";
		}

		//loop for increasing numbers
		int val = i;					
		for(int cnt=1; cnt<=i; cnt++){
			cout<<val;
			val = val+1;			//val is updated to 1 greater than i but not printed
		}

		//loop for decreasing number
		val = val-2;
		for(int cnt=1; cnt<=i-1; cnt++){
			cout<<val;
			val = val-1;
		}
		cout<<endl;

	}



	return 0;
}