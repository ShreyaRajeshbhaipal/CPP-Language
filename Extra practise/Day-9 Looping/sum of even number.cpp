#include<iostream>
using namespace std;

main(){
	int i, sum=0;
	
	for(i=1; i<=100; i++){
		if(i % 2 == 0){
			sum = sum + i;
		}
		
	}cout<<sum;
}
