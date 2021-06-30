#include<iostream>
using namespace std;

void move(int n, char src, char helper, char dest){

	//base case
	if(n==0){
		return;
	}
	//rec case
	//move n-1 disks from source to helper
	move(n-1,src,dest,helper);
	cout << "Shift disk"<< n <<"from" << src << "to" << dest << endl;	

}

int main(){

	int n;
	cin >> n;
	move(n, 'A', 'B', 'C');

	return 0;
}