#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<int> s;
	
	for(int i=0;i<10;i++){
		s.insert(i);
	}
	
	cout<<"Displaying the number present in the set";
	
	for(auto it=s.begin(); it!=s.end();it++){
		cout<<*it<<" ";
	}
	
	return 0;
}