#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> d{1,2,3,10,14};
	//push back->add element to the last
	d.push_back(16);

	//pop back-> removes the last element O(N)
	d.pop_back();


	//Insert some elements in the middle O(N)
	d.insert(d.begin()+3, 4,100);

	//Erase the elements from the middle
	d.erase(d.begin()+2);

	//erasing range of elements
	d.erase(d.begin()+2,d.begin()+5);
	


	for(int x:d){
		cout << x << ",";
	}
	cout << endl;
	cout << d.size()<<endl;
	cout << d.capacity(); //Capacity was 5 but after push_back the capacity is doubled.


	return 0;
}