// Insert a node at a position // In middle of the node 
// REUSING OLD CODE - insertTail() & insertHead()

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

// To find length of the node
int findLength(Node* &head){

    // Create a temporary node -> Avoid overwriting
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

// To insert in middle
void insertMid(int data, Node* &head, Node* &tail, int position){

    // For empty linked list
    if(head == NULL){

        // Step 1: Create a new node
        Node* newnode = new Node(data);

        // Step 2: Point both to newnode
        head = newnode;
        tail = newnode;
        return;
    }


    // If at starting
    if(position == 0){
        
        // Insert at head
        insertHead(data, head, tail);
        return;
    }

    // If at ending
    int len = findLength(head);
    if(position == len){

        // Insert at tail
        insertTail(data, head, tail);
        return;
    }


    // STEP 1 : Find the previous element
    Node* prev = head;
    
    int i = 1;              // Starts from first node
    while(i < position){
        prev = prev -> next;
        i++;
    }

    // Find current element
    Node* curr = prev -> next;


    // STEP 2 : Create new node
    Node* mid = new Node(data);

    // STEP 3 : Allign in correct order
    mid -> next = curr;     // Mid points to current element
    prev -> next = mid;     // Previous points to Mid element

}

// To print nodes
void print(Node* head){

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

    // Calling function to insert elements 
    insertHead(22, head, tail);
    insertHead(50, head, tail);     // First element

    insertTail(64, head, tail);
    insertTail(72, head, tail);     // Last element

    // Calling function to insert in middle
    insertMid(55, head, tail, 4);       // Insert after 2nd node

    // Printing the values
    print(head);
    cout << endl;

    // Printing head and tail values
    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
}