// Delete a node from a given linked list
// REUSING OLD CODE - insertTail() & insertHead()

// Insert a new node at the head of a node (Inserting before current node)

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

    // Destructor to delete a node
    ~Node(){
        cout << "Deleted node: " << this->data << endl;
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

// To delete a node
void deleteNode(Node* &head, Node* &tail, int position){

    // If Node is empty
    if(head == NULL){
        cout << "List is empty! Can't delete" << endl;
        return;
    }


    // To delete first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;    // Move head to next node

        temp -> next = NULL;
        delete temp;            // Delete temp node
        
        return;
    }


    // To delete last node
    int len = findLength(head);
    if(position == len){

        // STEP 1: Find previous
        Node* prev = head;

        int i=1;
        while(i < position-1){
            prev = prev -> next;
            i++;
        }

        // STEP 2: Point previous to NULL
        prev -> next = NULL;

        // STEP 3: Make a temporary node for tail
        Node* temp = tail;

        // STEP 4: Move tail to previous element
        tail = prev;

        // STEP 4: Delete temporary node
        delete temp;
        return;
    }


    // To delete middle nodes
    // STEP 1: Find previous and current elements
    int i = 1;
    Node* prev = head;

    while(i < position-1){
        prev = prev -> next;
        i++;
    }

    Node* curr = prev -> next;


    // STEP 2: Pointing to current's next pointer
    prev->next = curr->next;

    // STEP 3: Current next points to NULL
    curr -> next = NULL;

    // STEP 4: Delete current
    delete curr;
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

    // Calling function for head
    insertHead(22, head, tail);
    insertHead(53, head, tail);         // First element 


    // Calling function for tail
    insertTail(65, head, tail);
    insertTail(45, head, tail);         // Last element

    // Printing the values
    cout << "Before deletion: ";
    print(head);
    cout << endl << endl;


    // Deleting node (ONLY LAST / FIRST ELEMENT)
    deleteNode(head, tail, 5);
    cout << endl << endl;


    // Printing updated list
    cout << "After deletion: ";
    print(head);
}