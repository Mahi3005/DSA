#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n = 36;
	vector<int> divisors;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			divisors.push_back(i);
		}
	}
	
	for(int i=0;i<divisors.size();i++){
		cout<<divisors[i]<<" ";
	}
	
	
	return 0;
}