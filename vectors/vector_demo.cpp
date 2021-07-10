#include<iostream>
#include<vector>
using namespace std;

int main(){

	//Create and initilize a vector
	vector<int> v;
	vector<int> b(5,10);//five integers in an array and they have a value 10
	vector<int> c(b.begin(),b.end());

	vector<int> d{1,2,3,10,13};

	//Iterate over the vector

	//1st way
	for(int i=0; i<c.size();i++){
		cout << c[i]<<",";
	}
	cout << endl;

	//2nd Way
	for(auto it=b.begin();it!=b.end();it++){	//vector<int>::iterator is the class here for 'auto'
		cout << *it<<",";
	}
	cout << endl;

	//3rd Way
	//for each loop
	for(int x:d){
		cout << x<<",";
	}


	return 0;
}