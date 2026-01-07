#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int,int> mp;
	
	for(int i=0;i<10;i++){
		mp.insert({
		i,i*10});
	}
	
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	
	
	return 0;
}