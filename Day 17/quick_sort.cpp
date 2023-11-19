#include<iostream>
#include<vector>

using namespace std;

int partition(int arr[], int s, int e){
    int pivotIndex = s;
    int pivotElement = arr[s];
    int count =0;
    for(int i = s+1,i<=e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }

    int rightIndex = s +count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex = rightIndex;
    int i= s;
    int j = e;
    while(i<pivotIndex &&j>pivotIndex){
        while(arr[i]<pivotElement){
            i++;
        }
        while(arr[i]<pivotElement){
            j--;
        }
        return    ;
    }
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}

int main(){

    
}