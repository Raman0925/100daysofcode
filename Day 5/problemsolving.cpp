#include<iostream>
using namespace std;

void copy(int* p){
    *p = *p + 1;
}

int main(){
    int a = 10;
    int *ptr = &a;
    int** p =&ptr;
    copy(ptr);
    cout<<a;

    int c = 20;
    int& d =c;
    cout <<c<<" "<<d;






    return 0;

}