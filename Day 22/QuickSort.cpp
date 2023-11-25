#include<iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


int partition(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[0]) {
            count++;
        }
    }

    swap(arr[0], arr[count]);

    int p1 = count + 1;
    int p2 = n - 1;
    int i = count;
    
    while (p1 <= p2) {
        if (arr[p1] < arr[i]) {
            p1++;
        } else if (arr[p2] >= arr[i]) {
            p2--;
        } else {
            swap(arr[p1], arr[p2]);
            p1++;
            p2--;
        }
    }

    return count;
}

void sort(int& arr[],int& low,int& high){
   if(low<=high){return;}
   int pivotIndex =  partition(arr,low,high);



   
    
}

int main() {
    int arr[] = {20, 1, 2, 5, 7, 9, 28, 23, 25, 29};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    return 0;
}
