#include<iostream>
using namespace std;

//defining a new datatype
class Car{
public:
	int price;
	int model_no;
	char name[20];

};
int main(){
	//creating an object
	Car c;

	cout <<"C-Name " <<sizeof(c.name) << endl;
	cout <<"C-Price " <<sizeof(c.price) << endl;
	cout <<"C-model " <<sizeof(c.model_no) << endl;
	cout << "Car " << sizeof(Car) << endl;


	return 0;
}