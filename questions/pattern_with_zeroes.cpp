#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row,col;
	for(row=1; row<=n; row++){
		cout<<row<<"	";
		for(int k=2; k<row; k++){
			cout<<"0"<<"	";
		}
		if(row>1){
			cout<<row;
		}
		cout<<endl;
	}

	return 0;
}