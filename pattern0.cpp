#include<iostream>
using namespace std;

int main(){
	int row,col;
	 cin>>row>>col;  //2 3
	 int i = 0;

	 while(i<row){
	 	int j=0;		//1<2
	 	while(j<col){     //0<3
	 		cout<<"#";   //###
	 		j = j+1;
	 	}
	 	cout<<endl;
		i=i+1;
	 }
		

  


	return 0;
}
