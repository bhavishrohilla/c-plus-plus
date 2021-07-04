#include<iostream>
#include<cstring>
using namespace std;

class Car{
private:
	float price;

public:
	int model_no;
	char *name;

	Car(){
		name = NULL;
	}
	Car(float p, int m, char *n){
		price = p;
		model_no = m;
		name = new char[strlen(n)+1];
		strcpy(name,n);
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
	Car d(c);	//Copy COnstructor
	c.name[0] ='A';
	c.print();
	d.print();

	return 0;
}