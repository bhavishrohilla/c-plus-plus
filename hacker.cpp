#include <iostream>
#include <cstdio>
#include<climits>
using namespace std;

int main() {
    int no;
    int max_so_far = INT_MIN;
    for(int i=0; i<=4;i++){
    	cin>>no;
    	if(no>max_so_far){
    		max_so_far=no;
    	}
    }
    cout<<max_so_far<<endl;
    
    return 0;
}