#include<iostream>
#include<queue>
using namespace std;


int main(){
	queue<char> q;
	int freq[27] = {0};
	char ch;
	cin >> ch;
	while(ch!='.'){
		//Logic
		q.push(ch);
		freq[ch-'a']++;

		//query
		while(!q.empty()){
			int idx = q.front()-'a';
			if(freq[idx]>1){
				q.pop()
			}
			else{
				cout << q.front()<<endl;
				break;
			}
		}

		cin>>ch;
	}
}