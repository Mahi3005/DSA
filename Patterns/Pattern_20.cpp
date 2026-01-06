#include<iostream>
using namespace std;

int main(){
	int n=5;
	int space=2*(n-1);
	int s=2;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		for(int j=0;j<space;j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
		space-=2;
}
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}
		for(int j=0;j<s;j++){
			cout<<" ";
		}
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}
		cout<<endl;
		s+=2;
	}
	return 0;
}