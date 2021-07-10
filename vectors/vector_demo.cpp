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
	cout << endl;

	//Some functions
	vector<int> u;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int no;
		cin >> no;
		u.push_back(no);	//Adds element to the end of the vector
	}
	for(int x:u){
		cout << x<<",";
	}
	cout << endl;

	//Understans at memeory level,what are the differnces in the two
	cout << "Size " <<u.size()<<endl;
	cout <<"capacity" << u.capacity()<<endl; //size of underlined array
	cout << "Max size" <<u.max_size()<<endl;	//maximum no. of elements a vector can hold in worst case

	cout << "Size " <<d.size()<<endl;
	cout <<"capacity" << d.capacity()<<endl; //size of underlined array
	cout << "Max size" <<d.max_size()<<endl;	//maximum no. of elements a vector can hold in worst case

	return 0;
}