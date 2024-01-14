// Remove the duplicate element or node from a given linkedlist

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

void removeDuplicate(Node* &head) {

    if(head == NULL) {
        return;
    }

    if(head -> next == NULL) {
        return;
    }

    Node* curr = head;
    while(curr != NULL) {

        // Current current element with next element
        if( (curr -> next != NULL) && (curr -> data == curr -> next -> data) ) {

            Node* temp = curr -> next;

            // If true : Move to temp's next node
            curr -> next = temp -> next;
            delete temp;            // Delete temp
        }

        else {
            // If not : Keep moving as usual
            curr = curr -> next;
        }
    }
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

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(20);
    Node* fourth = new Node(30);
    Node* fifth = new Node(40);
    Node* sixth = new Node(40);
    
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = NULL;          

    cout << "Before: ";
    print(head);

    cout << "After: ";
    removeDuplicate(head);
    print(head);
}   