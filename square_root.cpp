#include<iostream>
using namespace std;

int main(){
	int N,P;
	cin>>N>>P;

	float ans = 0;
	float inc =1.0;
	for(int times=0; times<=P; times++){
		//Finalize the correct digit to the current place 
		while(ans*ans<=N){
			ans  = ans+inc;
		}
		ans = ans-inc;
		inc = inc/10;
	}
	cout<<ans<<endl;


	return 0;
}