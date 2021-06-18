#include<iostream>
using namespace std;

int main(){
	//Array of fixed size -> O(1) space
	int cnt[64] = {0};
	int n,no;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>no;
		//Update cnt array w=by extracting bits
		int j=0;
		while(no>0){
			int last_bit = (no&1);
			cnt[j] += last_bit;
			j++;
			no = no>>1;
		}
	}
	//iterate over the array and form the ans by converting 0s and 1s into number
	int p=1;
	int ans =0;
	for(int i=0; i<64; i++){
		cnt[i] %= 3;
		ans += (cnt[i]*p);
		p = p << 1;
	}

	//Print the final ans
	cout << ans<<endl;

}