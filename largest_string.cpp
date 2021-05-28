#include<iostream>
#include<cstring>
using namespace std;

int main(){

	int n;
	cin >> n;
	char a[1000];
	char largest[1000];
	cin.get();
	int len = 0;
	int largest_len = 0;
	for(int i=0; i<n; i++){
		cin.getline(a, 1000);
		//cout<< a << endl;
		len = strlen(a);
		if(len>largest_len){
			largest_len = len;
			strcpy(largest, a);
		}
	}
	cout<<"The largest string is '"<<largest<<"' and the length is "<<largest_len<<endl;
}