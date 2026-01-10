#include<iostream>
using namespace std;

class Solution{
	public:
		void printNumber(int n , int current){
			//base condition
			
			if(current > n){
				return;
			}
			
			cout<<n<<" ";
			n=n-1;
			printNumber(n,current);
		}
};

int main(){
	Solution sol;
	int current  = 1;
	int n = 30 ; 
	
	sol.printNumber(n,current);
	
	return 0;
}