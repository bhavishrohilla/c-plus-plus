#include <iostream>
using namespace std;

int main(){
	int x  = 5000;
	float y = 45.89;
	bool weather_is_rainy = true;
	double pi= 3.14;
	char ch = 'B';

	// HOw much memory each of these is going to occupy
	cout<<"int"<<" "<< sizeof(x)<<endl;		//4bytes
	cout<<"float"<<" "<< sizeof(y)<<endl;		//4bytes
	cout<<"bool"<<" " <<sizeof(weather_is_rainy)<<endl;		//1byte
	cout<<"double"<<" "<<sizeof(pi)<<endl;		//8bytes
	cout<<"ch"<<" "<<sizeof(ch)<<endl; 		//1byte  

	return 0;
}