#include <iostream>
#include <vector>
using namespace std;

vector<bool> Sieve(int n){
    vector<bool> sieve(n+1,true);
    sieve[0]=sieve[1]=false;

    for(int i =2; i*i<=n; i++){
        if(sieve[i]==true){
            // int j =i*2;
            int j = i*i;
            while(j<=n){
                sieve[j]=false;
                j +=i;
            }
        }
    }
}

int main(){
    vector<bool> sieve=Sieve(25);
    for (int i =0;i<)
}