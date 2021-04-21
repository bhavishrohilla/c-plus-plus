#include<iostream>
using namespace std;

int main(){
	int petrol = 30;
	int mileage = 30;
	int x = 0;
	int mov = 1;
	cout<<" Petrol pumps generated at 5, 10, 15, 20, 25"<<endl;
	while(x<100){
		x = x + 4;
		mileage = mileage-4;
		if(mileage<8){
			mileage= mileage+20;
		}
		cout<<"Move-"<<mov<<" Car at "<<x<<" petrol remaining "<<mileage<<endl;
		mov = mov+1;
	}
	cout<<",reached";




	return 0;
}