#include<iostream>
using namespace std;

class Solution{
	public:
		int sumN(int n){
			//base condition
			if(n==1){
				return 1;
				
			}
			
			return n + sumN(n-1);
			
}
};

int main(){
	
	Solution sol;
	int n = 5;
	
	cout<<sol.sumN(n);
	
	
	return 0;
}