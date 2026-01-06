#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		//Space
		for(int j =1 ; j<=5-i-1 ; j++){
			cout<<" ";
		}
		//stars
		
		for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}
		
		//space
		for(int j =1 ; j<=5-i-1 ; j++){
			cout<<" ";
		}
		
		cout<<endl;
	}
	
	return 0;
	
}