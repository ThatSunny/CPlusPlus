// Find the middle node in a linked list

#include<iostream>
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

Node* getMiddle(Node* &head) {

    // Edge cases
    // If LL is empty
    if(head == NULL) { 
        cout << "Empty! Can't find middle node";
        return head;
    }

    // If only one node
    if(head -> next == NULL) {
        return head;
    }

    // Other cases | >1 nodes
    Node* slow = head;
    Node* fast = head -> next;

    while(slow != NULL && fast != NULL) { 

        // Increasing fast by one 
        fast = fast -> next;

        // Checking if reached NULL or not 
        if(fast != NULL) { 

            // If not -> Increasing fast once more
            fast = fast -> next;

            // Increasing slow by once
            slow = slow -> next; 
        }
    }
    return slow;
}


void print(Node* &head) { 
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = NULL;

    print(head);

    cout << "Middle node: " << getMiddle(head) -> data;
}