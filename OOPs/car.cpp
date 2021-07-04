#include<iostream>
using namespace std;

//defining a new datatype
class Car{
private:
	float price;

public:
	Car(){
		cout << "Inside Car constructor" << endl;
	}
	Car()
	int model_no;
	char name[20];

	void print(){
		cout << "Price "<<price<<endl;
		cout << "NAme " << name<<endl;
		cout << "MOdel No "<< model_no << endl;

	}
	float get_discounted_price(float x){
		return price*(1.0-x);
	}

	float apply_discout(float x){
		price = price*(1.0-x);
		return price;
	}
	void set_price(float p){
		int msp = 111;
		if(p>msp){
			price = p;
		}
		else{
			price = msp;
		}
		
	}
	float get_price(){
		return price;
	}
};
int main(){
	//creating an object
	Car arr[20];	//store info of max 20 cars
	Car c;

	c.model_no = 112;
	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';

	/*cout <<"C-Name " <<sizeof(c.name) << " "<<c.name <<endl;
	//cout <<"C-Price " <<sizeof(c.price) <<" "<<c.price <<endl;
	cout <<"C-model " <<sizeof(c.model_no)<<" "<<c.model_no << endl;
	cout << "Car " << sizeof(Car) << endl;
*/
	c.set_price(100);
	cout << "Enter the discount - ";
	int  discout;
	cin >> discout;

	cout << c.get_discounted_price(discout);
	c.print();

	return 0;
}