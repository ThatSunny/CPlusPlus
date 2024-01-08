// Sort 0s 1s and 2s in a given linked list 
// Using Dutch National Flag Algorithm or
// Three Way Partitioning Algorithm


#include<iostream>
#include<climits>
using namespace std;

class Node {
    public:
    int data; 
    Node* next;

    Node(){
        this -> data = 0;
        this -> next = NULL;
    }

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

Node* sortLinkedList(Node* &head) {
    
    // STEP 1 : Create dummy nodes
    Node* zeroHead = new Node(INT_MIN);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(INT_MIN);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(INT_MIN);
    Node* twoTail = twoHead;


    // Traverse original LL
    Node* curr = head;
    while(curr != NULL) {

        if(curr -> data == 0) {
            
            // Separate this node
            Node* temp = curr;  
            curr = curr -> next;        // Points to next node
            temp -> next = NULL;        // Isolates the node

            // Append it to the dummy node
            zeroTail -> next = temp;
            zeroTail = temp; 
        }

        else if(curr -> data == 1) {

            // Separate this node
            Node* temp = curr;  
            curr = curr -> next;        // Points to next node
            temp -> next = NULL;        // Isolates the node

            // Append it to the dummy node
            oneTail -> next = temp;
            oneTail = temp; 
        }

        else if(curr -> data == 2) {
                        
            // Separate this node
            Node* temp = curr;  
            curr = curr -> next;        // Points to next node
            temp -> next = NULL;        // Isolates the node

            // Append it to the dummy node
            twoTail -> next = temp;
            twoTail = temp; 
        }
    }

    // We now have 3 separate nodes ready
    // Remove the dummy nodes
    

    // Removing 0 dummy node
    Node* temp = zeroHead;
    zeroHead = zeroHead -> next;
    temp -> next = NULL;
    delete temp;

    // For 1
    temp = oneHead;
    oneHead = oneHead -> next;
    temp -> next = NULL;
    delete temp;

    // For 2
    temp = twoHead;
    twoHead = twoHead -> next;
    temp -> next = NULL;
    delete temp;


    // Join lists
    // 1 List in non-empty
    if(oneHead != NULL) {           
        zeroTail -> next = oneHead;

        if(twoHead != NULL) {
            oneTail -> next = twoHead;
        }
    }

    // 1 List in empty  -> Directly checking for two
    else {
        if(twoHead != NULL) {
            zeroTail -> next = twoHead;
        }
    }



    // Returning head of 0 LL
    return zeroHead;

}

void print(Node* &head) { 
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* head = new Node(0);
    Node* second = new Node(2);
    Node* third = new Node(1);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(1);
    
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = NULL;          

    cout << "Before: ";
    print(head);

    cout << "After: ";
    sortLinkedList(head);
    print(head);
}   