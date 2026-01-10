#include<iostream>
using namespace std;

class Solution{
	public:
		void printName(int i,int n){
			//base condition
			
			if(i>n){
				return;
			}
			
			cout<<"Dhruv"<<" ";
			i=i+1;
			printName(i,n);
			
		}
};

int main(){
	Solution sol;
	int n = 10;
	
	sol.printName(1,n);
	return 0;
}