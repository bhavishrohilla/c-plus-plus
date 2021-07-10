#include<iostream>
#include<list>
#include<vector>
using namespace std;

template<typename T>
//Linear Search
int search(T arr[], int n, T key){
	for(int p=0; p<n; p++){
		if(arr[p]==key){
			return p;
		}
	}
	return n;
}


//Templates + Iterator + Comparators
template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){
	while(start!=end){
		if(cmp(*start,key)){
			return start;
		}
		start++;
	}
	return end;
}

class Book{
public:
	string name;
	int price;
	Book(){

	}
	Book(string name, int price){
		this->name = name;
		this->price = price;
	}
};

class BookCompare{
public:
	bool operator()(Book A, Book B){
		if(A.name==B.name){
			return true;
		}
		return false;
	}
};

int main(){
	/*
	int a[] = {1,5,3,7,8,6,2};
	int n = sizeof(a)/sizeof(int);
	int key = 7;

	float b[] = {1.1, 1.2, 1.3};
	float k = 1.3;
	//cout << search(a,n,key);
	cout << search(b,3,k);
	*/
	/*
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(5);
	l.push_back(3);
	auto it = search(l.begin(),l.end(),5);
	if(it==l.end()){
		cout << "Element not present";
	}
	else{
		cout << *it << endl;
	}
	*/

	Book b1("C++", 100);
	Book b2("Python", 120);
	Book b3("Java", 130);
	Book b4(b1);

	vector<Book> l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);

	Book bookToFind("C++",110); //new edition
	BookCompare cmp;

	auto it = search(l.begin(), l.end(),bookToFind,cmp);
	if(it!=l.end()){
		cout << "Book Found in the library";
	}
	else{
		cout << "Not Found";
	}
	/*
	if(cmp(b1,bookToFind)){
		cout << "True same books!";
	}
	*/
	return 0;
}