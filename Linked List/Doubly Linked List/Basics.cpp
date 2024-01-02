// To create a doubly linked list, print and find its length

#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;


    // Default CTor
    Node() {
        data = 0;
        prev = NULL;
        next = NULL;
    }

    // Parameterzied CTor
    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

// Function to print linked list
void print(Node* &head){

    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

// Function to get length
int findLength(Node* &head) {
    int len = 0;
    
    Node* temp = head;
    while(temp != NULL) {
        temp = temp -> next;
        len++;
    }
    return len;
}

int main() {

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first -> next = second;
    first -> prev = NULL;

    second -> next = third;
    second -> prev = first;

    third -> next = NULL;
    third -> prev = second;

    cout << "Length: " << findLength(first) << endl;
    cout << "Printing LL: ";
    print(first);
}