#include <iostream>
using namespace std;

int main(){
	int x  = 5000;
	float y = 45.89;
	bool weather_is_rainy = true;
	double pi= 3.14;
	char ch = 'B';


	cout<<"int"<<" "<< sizeof(x)<<endl;
	cout<<"float"<<" "<< sizeof(y)<<endl;
	cout<<"bool"<<" " <<sizeof(weather_is_rainy)<<endl;
	cout<<"double"<<" "<<sizeof(pi)<<endl;
	cout<<"ch"<<" "<<sizeof(ch)<<endl; 

	return 0;
}