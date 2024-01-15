// Reversing a singly linked list

#include<iostream>
using namespace std;

// Declaration of node
class Node{

    public:
    int data;       // Variable -> store data
    Node* next;     // Ptr -> store address of next node


    // Default constructor
    Node(){
        this->data = 0;
        this->next = NULL;
    }

    // Constructor (Store data)
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// To insert on head
void insertHead(int data, Node* &head, Node* &tail){

    // If Node is empty
    if(head == NULL){

        // Step 1: Create a new node
        Node* newnode = new Node(data);

        // Step 2: Point both to new node
        head = newnode;
        tail = newnode;
    }

    else{
    
        // 1. Create a new node
        Node* newnode = new Node(data);

        // 2. Point it to head 
        newnode->next = head;

        // 3. Move head to newnode
        head = newnode;
    }
}

// To insert on tail
void insertTail(int data, Node* &head, Node* &tail){
    
    // If Node is empty
    if(tail == NULL){
        
        // Step 1: Create a new node
        Node* newnode = new Node(data);

        // Step 2: Point both to new node
        head = newnode;
        tail = newnode;
    }

    // If Node is non-empty
    else{

        // Step 1:
        Node* newnode = new Node(data);
        
        // Step 2:
        tail->next = newnode;
        
        // Step 3:
        tail = newnode;
    }
}

// Function to reverse nodes
Node* reverseNode(Node* &prev, Node* &curr){

    // Base condition
    if(curr == NULL){
        return prev;
    }

    // Solving 1 case
    Node* forward = curr -> next;
    curr -> next = prev;

    reverseNode(curr, forward);
    
}


// To print nodes
void print(Node* &head){

    // Creating a temporary node
    Node* temp = head;

    // Loop traverses until NULL pointer is reached
    while(temp != NULL){

        // Print the data
        cout << temp->data << " ";
        
        // Move the pointer to next
        temp = temp->next;
    }
}

int main(){

    // Creating nodes
    Node* head = NULL;
    Node* tail = NULL;

    // Calling function for head
    insertHead(22, head, tail);
    insertHead(53, head, tail);       // First element 



    // Calling function for tail
    insertTail(65, head, tail);
    insertTail(45, head, tail);    // Last element

    // Printing the values
    cout << "Before: ";
    print(head);
    cout << endl;

    // Reverse function call 
    Node* prev = NULL;
    Node* curr = head;

    head = reverseNode(prev, curr);

    // Printing the values
    cout << "After: ";
    print(head);
    cout << endl;
}