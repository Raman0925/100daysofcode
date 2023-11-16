#include<iostream>
using namespace std;

void printSubsequences(string str,string& output,int i){
    if(i>=str.length()){
        cout <<output<<endl;
        return;

    }
    printSubsequences(str,output,i+1);

    output.push_back(str[i]);
    printSubsequences(str,output,i+1);

}



int main(){

    string str = "Raman";
    string output ="";
    int i = 0;
    printSubsequences(str ,output,i+1);

}