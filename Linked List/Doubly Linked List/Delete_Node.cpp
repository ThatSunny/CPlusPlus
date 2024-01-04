// Insert a node in the middle of a linked list
// Reusing old codes- insertHead() & insertMiddle()

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

    // DTor for deleting nodes
    ~Node(){
        cout << "Deleted: " << this -> data << endl;
    }

};

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

// Function to insert at tail
void insertTail(int data, Node* &head, Node* &tail){

    // Empty Linked List
    if(head == NULL){

        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;

        return;
    }

    // Non-Empty
    else {

        // STEP 1 : Create a new node
        Node* newnode = new Node(data);

        // STEP 2 : Point newnode to tail
        newnode -> prev = tail;

        // STEP 3 : Point prev to newnode
        tail -> next = newnode;

        // STEP 4 : Move tail to newnode
        tail = newnode; 
    }
}

// Function to delete a node
void deleteNode(Node* &head, Node* &tail, int position){

    // Empty LL
    if(head == NULL){
        cout << "Empty! Can't delete";
        return;
    }

    // Outside the list 
    int len = findLength(head);
    if(position > len) {
        cout << "Enter valid position!" << endl;
        return;
    }

    // Single node
    if(head -> next == NULL){
        
        Node* temp = head;

        temp -> next = NULL;
        temp -> prev = NULL;

        delete temp;
        return;
    }

    // First node
    if(position == 1) {
        Node* temp = head;

        head = head -> next;

        temp -> next = NULL;
        head -> prev = NULL;

        delete temp;
        return;
    }

    // Last node
    if(position == len){
        Node* temp = tail;

        tail = tail -> prev;

        tail -> next = NULL;
        temp -> prev = NULL;

        delete temp;
        return;
    }

    // Middle node

    // STEP 1 : Find left, current and right node
    int i = 1;
    Node* left = head;
    while(i < position - 1){
        left = left -> next;            // Fetching left node here 
        i++;
    }

    Node* curr = left -> next;          // Fetching current node here
    Node* right = curr -> next;         // Fetching right node here

    // STEP 2 : Aligning in current order
    left -> next = right;
    curr -> prev = NULL;

    curr -> next = NULL;
    right -> prev = left;

    delete curr;
    return;
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

    deleteNode(head, tail, 2);
    cout << "After: "; 
    print(head);
}