#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"No. of binary numbers - ";
	cin>>n;
	int array[n];	
	cout<<"Enter" <<n<<" binary numbers "<<endl;
	int x;
	for(x=0;x<n;x++){
		cin>> array[x];
	}
	for(int i=0;i<n;i++){
		int ans=0;
		int p = 1;
		while(array[i]>0){
			int r = array[i]%10;
			ans = ans +r*p;
			p = p*2;
			array[i]=array[i]/10;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}