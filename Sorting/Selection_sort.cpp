#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> arr , int n){
	
	for(int i=0;i<arr.size();i++){
		int mini=i;
		
		
		for(int j=i+1;j<arr.size();j++){
			if(arr[j]<arr[mini]){
				mini=j;
			}
		}
		
		
		int temp=arr[mini];
		
		arr[mini]=arr[i];
		
		arr[i] = temp;
		
	}
	
	//print the sorted array
	
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();
    
    //print unsorted array
    
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    	
	}
	
	cout<<endl;
	
	selectionSort(arr,n);
	
	return 0;
}