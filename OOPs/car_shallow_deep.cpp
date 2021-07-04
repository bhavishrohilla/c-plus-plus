#include<iosream>
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
		model = m;
		
	}
};

int main(){



	return 0;
}