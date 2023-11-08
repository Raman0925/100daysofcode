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
      

      return 0;  
}
