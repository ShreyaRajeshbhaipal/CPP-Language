#include<iostream>
using namespace std;

main(){
	int a[5] = {1,2,3,4,5};
	int *p = a;
	
	for (int i;i<5;i++){
		cout<<*(p+i)<<" ";
	}
}
