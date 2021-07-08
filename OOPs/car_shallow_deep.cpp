#include<iostream>
#include<cstring>
using namespace std;

class Car{
private:
	float price;

public:
	int model_no;
	char *name;
	const int msp = 99;	//constant data member (cannot be altered)
	Car():msp(99){
		name = NULL;
	}
	Car(float p, int m, char *n,int minprice=99):price(p),msp(minprice){
		price = p;
		model_no = m;
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

	Car(Car &x){
		price = x.price;
		model_no = x.model_no;
		name = new char[strlen(x.name)+1];
		strcpy(name,x.name);
	}

	void set_Price(int p){
		price = p;
	}

	void print(){
		cout << "Name " << name<<endl;
		cout << "Model No "<< model_no << endl;
		cout << "Price "<<price<<endl;
	}
};

int main(){
	Car c(111,100,"BMW");	//parametrised constructor
	cout << c.msp<<endl;
	Car d(c);	//Copy COnstructor
	d.name[0] ='A';
	c.print();
	d.print();

	return 0;
}