#include<iostream>
using namespace std;

int main(){
	
	int gcd = 1;
	int n1=9;
	int n2=12;
	
//	for(int i =1;i<=min(n1,n2);i++){
//		if(n1%i==0 && n2%i==0){
//			gcd=i;
//		}
//		
//	
//	} // brute force method

	for(int i=min(n1,n2);i>=1;i--){
		if(n1%i==0 && n2%i==0){
			gcd=i;
			break;
		}
	}
	cout<<gcd;
	
	return 0;
}