#include<iostream>
#include<vector>

class index
{
private:
     const int *x = 5;
public:
    index(/* args */);

    int sety(int _val) const {

        return x = _val;
    }
   
};

