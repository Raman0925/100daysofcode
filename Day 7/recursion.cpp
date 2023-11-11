#include<iostream>
using namespace std;
void printCounting(int n){
    if (n==0){
        return;
    }
    cout<< n<<endl;
    printCounting(n-1);
}
int fact(int n)
{
    if(n==1){
        return 1;
    }
    int answer = n * fact(n-1);
    return answer;
}

int fib(int n){
    if(n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    int ans = fib(n-1) + fib(n-2);
    return ans;



}


int main(){
    // int n;
    // cin>>n;
    printCounting(10);
    int result = fact(10);
    cout<<result;

    return 0;

}