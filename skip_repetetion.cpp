#include<iostream>
#include<cstring>
using namespace std;

void removeDuplets(char a[]){
	int l = strlen(a);
	if(l==0 or l==1){
		return;
	}
	int prev = 0;
	for(int curr=1; curr<l; curr++){
		if(a[curr]==a[prev]){
			a[prev] = a[curr];
			prev++;
		}
	}
	a[prev + 1] = '\0';
	return;
}
int main(){
	char a[100];
	cin.getline(a,100);
	removeDuplets(a);
	cout << a << endl;
}