#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int,int> mp;
	
	for(int i=0;i<10;i++){
		mp.insert({
			i,i*5
		});
	}
	
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<"\t"<<it->second<<endl;;
	}
	
	
	return 0;
}