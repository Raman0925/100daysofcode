#include <iostream>
using namespace std;


int main(){
      int a = 6;
      int b = 10;
      int *c = &a;
      cout << c<<endl;
      cout <<&a<<endl;
      cout << *c <<endl;
      cout << &c <<endl;
      //Bad Practice
      int* ptr;
      cout<<*ptr<< endl;
      
      //Good Practice
      int* atr = 0;
      cout <<*atr<<endl;
      //access the value ptr is pointing to.
      int arr[6] = {1,2,3,4,5,6};
      cout <<arr[0]<<endl;
      cout<<*(arr+1)<<endl;
      cout<<*(arr+3)<<endl;



      return 0;  
}
