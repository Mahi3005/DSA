#include<iostream>
#include<vector>

using namespace std;


vector<int> insertionSort(vector<int> arr,int n){
	for(int i=0;i<n;i++){
		int key=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j+1] = key;
	}
	
	return arr;
}

int main(){
	
	vector<int> arr = {13, 46, 24, 52, 20, 9};
	
	int n = arr.size();
	
	//before insertion call
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	arr = insertionSort(arr,n);
	
	//after the insertion sort
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	
	return 0;
}