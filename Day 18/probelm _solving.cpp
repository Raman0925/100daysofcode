#include<iostream>
#include<vector>
using namespace std;

void twoArray(vector<int>& a,vector<int>& b,vector<int>& c){

int i,j;
i=0;
j=0;
while(i<a.size() &&j<b.size()){
    if(a[i]<=b[j]){
        c.push_back(a[i]);
        i++;
        
    }
    else if(a[i]>b[j]){
        c.push_back(b[j]);
        j++;
    }

}
while(i<a.size()){
    c.push_back(a[i]);
    i++;

}
while(j<b.size()){
    c.push_back(b[j]);
    j++;

}


}

int main(){
    vector<int> a{};
    vector<int> b{1,2,3,4,5,6,7};
    vector<int> c;
    twoArray(a,b,c);
    for(auto num :c){
        cout <<num;
        
    }


}