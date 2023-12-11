#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }
};

Node* insertIntoBST(Node* root,int data){
    if(root ==NULL){

        root = new Node(data);
        return root;

   }
   if(root->data > data){
    root->left = insertIntoBST(root->left,data);

   }else{
    root->right = insertIntoBST(root->right,data);
   }


    return root;


}
void takeInput(){
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root,data)
    }
}