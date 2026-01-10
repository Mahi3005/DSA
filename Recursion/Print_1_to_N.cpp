#include<iostream>
using namespace std;

class Solution{
	public:
		//recursive fucntion to print the number upto the n given 
		
		void printNumber(int current , int n){
			//base condition
			if(current > n){
				return ;
				
			}
			
			cout<<current<<" ";
			
			printNumber(current+1,n);
		}
};

int main(){
	Solution sol;
	
	int n=10;
	
	sol.printNumber(1,n);
	cout<<"\n";
	
	return 0;
}