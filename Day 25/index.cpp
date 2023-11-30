#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next; // Corrected pointer type

    Node(int data1, Node* next1) {
        this->data = data1;
        this->next = next1;
    }

    Node(int data1) {
        this->data = data1;
        this->next = NULL;
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};

    // You can use the vector 'arr' to create a linked list
    Node* head = new Node(arr[0]); // Creating the first node

    Node* current = head;

    for (int i = 1; i < arr.size(); ++i) {
        Node* newNode = new Node(arr[i]);
        current->next = newNode; // Linking the current node to the new node
        current = newNode;       // Moving to the new node
    }

    // Now 'head' points to the first node of the linked list

    return 0;
}
