#include<iostream>
using namespace std;

class Complex{
	int real;
	int img;
public:
	Complex(){
		real = 0;
		img = 0;
	}
	//Parametrised Constructor
	Complex(int r, int i){
		real = r;
		img = i;
	}
	//Copy Constructor(exists by default)
	void setReal(const int r){
		real = r;
	}
	void setImg(const int i){
		img = i;
	}

	int getReal() const{
		return real;
	}

	int getImg() const{
		return img;
	}
	void print(){
		if(img>0){
			cout << real << " + " << img << "i"<<endl;
		}
		else{
			cout << real << " - " << img << "i"<<endl;
		}
	}

	void add(Complex &x){
		real += x.real;
		img += x.img;
	}

	void operator!(){
		img *= -1;
	}

	int operator[](string s){
		cout  << real <<" + " << img << "i " <<s << endl;
		if(s=="real"){
			return real;
		}
		if(s=="img"){
			return img;
		}
	}
};
int main(){
	
	Complex c1(5,3);
	c1.print();

	Complex c2;
	c2.setImg(8);
	c2.setReal(6);
	c2.print();

	//c1.add(c2);
	//c1.print();	
	
	!c1;
	c1.print();
	cout << c1["img"];
	return 0;
}