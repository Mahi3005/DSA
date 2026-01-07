#include<iostream>
#include<list>
using namespace std;

int main(){
	
	list<int> li;
	
	for(int i=0;i<5;i++){
		li.push_back(i);
	}
	
	while(!li.empty()){
		cout<<li.front();
		li.pop_front();
	}
	
	return 0;
}