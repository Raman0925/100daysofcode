#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> a,int start,int mid,int end){
          int n1 = mid - start + 1;
         int n2 = end - mid;
}
void mergeSort(vector<int> a,int start,int end){
    if (start==end)
    {
       return;
    }
    int mid = start + (end - start)/2;
       mergeSort(a,start,mid);
       mergeSort(a,mid+1,end);

       merge(a,start,mid,end);

    

}

int main(){
    vector<int> a{};
    vector<int> b{1,2,3,4,5,6,7};
    vector<int> c;
   

}