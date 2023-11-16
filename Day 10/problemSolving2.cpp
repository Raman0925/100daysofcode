#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int>& v,int& target,int low,int high){
    
    if(low<=high){
        int mid = low + (high-low)/2;
        if(v[mid] == target){
            return mid;
        }
        else if(v[mid]<target){
               return binarySearch(v,target,mid+1,high); 
        }
        else {
            return binarySearch(v,target,low,mid-1);

        }

    }
    return -1;



}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    
    int result = binarySearch(arr, target, 0, arr.size() - 1);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}