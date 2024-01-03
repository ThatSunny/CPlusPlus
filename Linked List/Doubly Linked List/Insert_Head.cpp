// Inset a linked list at head

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

// Function to insert at head
void insertHead(int data, Node* &head, Node* &tail){

    // Empty LL
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        
        return;
    }

    // Non-empty
    else{

        // STEP 1 : Create a new node
        Node* newnode = new Node(data);

        // STEP 2 : Point newnode to head
        newnode -> next = head;

        // STEP 3 : Point head to newnode
        head -> prev = newnode;

        // STEP 4 : Move head to newnode
        head = newnode;

        return;
    }
}



int main() {

    Node* first = new Node(10);
    Node* head = first;

    Node* second = new Node(20);

    Node* third = new Node(30);
    Node* tail = third;


    first -> next = second;
    // first -> prev = NULL;        // Automatically get set to NULL by para- constructor

    second -> next = third;
    second -> prev = first;

    // third -> next = NULL;        // Automatically get set to NULL by para- constructor
    third -> prev = second;

    cout << "Before: ";
    print(head);
    cout << endl;

    cout << "After: "; 
    insertHead(101, head, tail);
    print(head);
}