#include<iostream>
using namespace std;

class Solution{
	public:
		int Factorial(int n){
			if(n==0){
				return 1;
			}
			
			return n * Factorial(n-1);
		}
};

int main(){
	Solution sol;
	
	int n=5;
	cout<<sol.Factorial(n);
	return 0;
}