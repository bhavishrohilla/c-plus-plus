#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> d{1,2,3,10,14};
	d.push_back(16);
	for(int x:d){
		cout << x << ",";
	}
	cout << endl;
	cout << d.size()<<endl;
	cout << d.capacity(); //Capacity was 5 but after push_back the capacity is doubled.


	return 0;
}