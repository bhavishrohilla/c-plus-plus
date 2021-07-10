#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

class Car{
public:
	string car_name;
	int x,y;
	Car(){

	}
	Car(string n, int x, int y){
		name = n;
		this->x = x;
		this->y = y;
	}
	void dist(){
		//returns square of the distance from origin
		return x*x + y*y;


	}
}

bool compare(){
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int x,y;
		cin >>name >>x >> y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),compare);

	//for each loop
	for(auto p:v){
		cout << "Car "<<p.first <<","<< p.second<<endl;
	}




	return 0;
}