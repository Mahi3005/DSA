#include<iostream>
using namespace std;

class Solution{
	public:
		int fibonacci(int n){
			//base condition
			
			  if (n <= 1) {
        	return n;
    			}
			
			 int last = fibonacci(n - 1);   // (N-1)th Fibonacci
    		int slast = fibonacci(n - 2);  // (N-2)th Fibonacci
    		
    		return last + slast;
		}
};

int main(){
	Solution sol;
	
	cout<<sol.fibonacci(5);
	
	return 0;
}