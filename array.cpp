#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int array[n];
    int x;
    for(x=0;x<n;x++){
        cin>>array[x];
    }
    for(int i=n-1;i>=0;i--){
        cout<<array[i]<<" ";
    }

}