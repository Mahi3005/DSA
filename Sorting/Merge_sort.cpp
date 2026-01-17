#include<iostream>
#include<vector>
using namespace std;

class Solution{
	public:
		
		// Changed: vector<int>& arr (pass by reference)
		void merge(vector<int>& arr, int low, int mid, int high){
			vector<int> temp;
			int left = low;
			int right = mid + 1;
			
			while(left <= mid && right <= high){
				if(arr[left] <= arr[right]){
					temp.push_back(arr[left]);
					left++;
				}
				else{
					temp.push_back(arr[right]);
					right++;
				}
			}
			
			// Copy remaining left elements
			while(left <= mid){
				temp.push_back(arr[left]);
				left++;
			}
			
			// Copy remaining right elements
			while(right <= high){
				temp.push_back(arr[right]);
				right++;
			}
			
			// Copy back to original array
			for(int i = low; i <= high; i++){
				arr[i] = temp[i - low];
			}
		}
		
		// Changed: vector<int>& arr (pass by reference)
		void mergeSort(vector<int>& arr, int low, int high){
			if(low >= high){
				return; // base condition
			}
			
			int mid = (low + high) / 2;
			
			mergeSort(arr, low, mid);
			mergeSort(arr, mid + 1, high);
			merge(arr, low, mid, high);
		}
};

int main(){
	vector<int> arr = {5, 2, 8, 4, 1};
	Solution sol;
	
	// Changed: arr.size()-1 (last index is 4, not 5)
	sol.mergeSort(arr, 0, arr.size() - 1);
	
	cout << "Sorted array: ";
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}