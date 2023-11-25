#include<iostream>
using namespace std;

class Node
{
 public:
  int data;
  Node* next;
  Node(){
    this->data = 0;
    this->next = NULL;


  }
  Node(int data){
    this ->data = data;
    this->next = NULL;
  }

};

void printLL(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }

     
}
void insertAtHead(Node* &head,int data  ){
    if(head==NUll){

    }else
   {Node* newNode = new Node(data);
   newNode ->next = head;
     head=newNode;}

}
void insertTail(Node* head,Node* &tail, int data ){
       if(head ==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
            
        }
       
        Node* newNode = new Node(data);
    
        while(temp->next){
            temp = temp->next;
        }
        
        tail = newNode;

}
int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    printLL(first);


    
    return 0;


}
