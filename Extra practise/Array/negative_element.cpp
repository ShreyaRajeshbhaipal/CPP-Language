#include<iostream>
using namespace std;

main(){
	int n,i,a[50];
	
	cout<<"Enter size of array=";
	cin>>n;
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		if(a[i]<0){
			cout<<a[i]<<" ";
		}
	}
}
