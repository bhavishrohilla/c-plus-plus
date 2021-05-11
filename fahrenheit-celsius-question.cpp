#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    int step,c,min,max;
    cin>>min>>max>>step;
    
    for(int f = min; f<=max;f = f+step){
        c = ((f-32)*5)/9;
        cout<<f<<"  "<<c<<endl;
    }



}