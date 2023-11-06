//Length Of String
#include<iostream>
#include <cstring>
using namespace std;
//For Calculating length;
int getLength(char name[]){
     int length = 0;
     int i =0;
     while(name[i]!='\0'){
        length++;
        i++;

     }
     return length;
}

void replaceSpaces(char ch[]){
    int length = strlen(ch);
    for(int i=0;i<length;i++){
        if(ch[i]==' '){
            ch[i]='@';
        }
           
    }
}

void reverseChar(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

bool checkPalindrome(char word[]){
    int i =0;
    int n = strlen(word);
    int j = n-1;
    while(i<=j){
  if(word[i]!=word[j]){
    return false;
  }
  else{i++;
        j--;}
    }
    return true;
}



int main() {
    char myString[] = "Hello, World!";
    cout << "Original String: " << myString <<endl;
    int length = getLength(myString);
    cout<<"Length Of the String "<<length<<endl;

    reverseChar(myString);
    replaceSpaces(myString);

    cout << "Reversed String and replace spaces " << myString  << endl;
    bool checkPalindrom = checkPalindrome(myString);
    cout<<"Palindrome is "<<checkPalindrom<<endl;
    return 0;
}

