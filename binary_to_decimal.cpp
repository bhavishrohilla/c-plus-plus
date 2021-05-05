
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cout<<"Enter the binary number - ";
    cin>>n;
    int sum = 0;
    int  p =0;
    while(n>0){
    	int ones_digit = n%10;
    	int mult = (ones_digit<<p);
    	sum = sum+mult;
    	p = p +1;
    	n = n/10;
    }
    cout<<"The binary representation is - ";
    cout<<sum;
}