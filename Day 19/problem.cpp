#include<iostream>
#include<vector>
using namespace std;




class Car{
    public:
    string name;
    int weight;
    int age;

    void speedUp(){
        cout<<"speeding "<<endl;

    }

};

class Scorpio:public Car{
    public:
      int wheels;

   

};

int main(){
    Scorpio a;
    a.speedUp();
}
