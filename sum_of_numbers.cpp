#include<iostream>
using namespace std;

int main() {
	int n;
	//Take Input
	cin>>n;
	//Init Condition
	int i = 1;
	int sum = 0;

	while(i<=n){
		sum = sum+i;
		i = i+1;
	}
	cout<<sum<<endl;

	return 0;
}
/*alternate
int a,b,c,d;
	cin>>a>>b>>c>>d;
	int sum_of_four(int a, int b, int c, int d);
	int sum = 0;
	sum = sum +a;
	sum+=b;
	sum+=c;
	sum+=d;
	cout<<sum;
}

*/