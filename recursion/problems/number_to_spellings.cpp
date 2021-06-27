#include<iostream>
using namespace std;

char words[][10] = {"Zero","One", "Two", "Three","Four", "Five", "Six", "Seven", "Eight", "Nine"};
void Spell(int n){
	//base case
	if(n=0){
		return;
	}
	//rec case
	Spell(n/10);
	cout << 
}

int main(){
	int n;
	cin >> n;



	return 0;
}