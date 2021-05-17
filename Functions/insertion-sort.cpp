int main(){
	int n;
	cout<<"Size of Array- ";
	cin>>n;
	cout<<"Enter "<<n<<" elements "<<endl;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	bubbleSort(a,n);
	for(int x=0; x<n; x++){
		cout<<a[x]<<", ";
	}
}