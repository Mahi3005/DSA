#include<iostream>
#include<vector>
using namespace std;

class Solution{
	public:
		vector<int> reverseArray(vector<int> n){
			int p1=0;
			int p2=n.size()-1;
			
			while(p1<p2){
				swap(n[p1],n[p2]);
				p1++;
				p2--;
			}
			
			return n;
		}
};

int main(){
	Solution sol;
	vector<int> n ={1,2,3,4,5};
	
	vector<int> res = sol.reverseArray(n);
	
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	
	return 
}