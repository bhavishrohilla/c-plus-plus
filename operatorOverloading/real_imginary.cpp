#include<stdio>
using namespace std;

class Complex{
	int r,
	int img;
public:
	Complex(){
		real = 0;
		img = 0;
	}
	Complex(int r, int i){
		real = r;
		img = i;
	}
	//Copy Constructor(exists by default)
	void setReal(int r){
		real = r;
	}
	void setImg(int i){
		img = i;
	}

int main(){
	
	cout << "Hello World !!";

	return 0;
}