#include <iostream>
using namespace std;

int merge(int * arr,int s ,int e){
    int  mid =  (s+e)/2;
    int len1 = mid -s+1;
    int len2 = e- mid;
    int* left = new int[len1];
    int* right = new int[len2];
    int k = s;
    for(int i = 0;i<len1;i++){
        left[i] =arr[k];
        k++;
    }
    k = mid+1;
    for (int i =0; i<len2;i++){
        right[i] = arr[k];
        k++;
    }
    

}






void mergeSort(int * arr,int s ,int e){
    if(s>=e){
        return;

    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

       

}






int main(){

    




}
