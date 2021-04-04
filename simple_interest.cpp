#include <iostream>
using namespace std;

int main() {

	//Simple Interest
	//Declare a variable
	int p,r,t;
	float si;

	/*assigning value to the storage in the memory
	p=50;
	r=25;
	t=1;
	*/

	//taking input from the user
	cin>>p;
	cin>>r>>t;

	//every statement should be teminated by the semi-colon
	si = p*r*t/100.0;
	cout<< si <<endl;



	return 0;
}