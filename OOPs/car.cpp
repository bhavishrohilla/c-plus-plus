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
	Car arr[20];	//store info of max 20 cars
	Car c;

	c.price = 100;
	c.model_no = 112;
	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';

	cout <<"C-Name " <<sizeof(c.name) << " "<<c.name <<endl;
	cout <<"C-Price " <<sizeof(c.price) <<" "<<c.price <<endl;
	cout <<"C-model " <<sizeof(c.model_no)<<" "<<c.model_no << endl;
	cout << "Car " << sizeof(Car) << endl;


	return 0;
}