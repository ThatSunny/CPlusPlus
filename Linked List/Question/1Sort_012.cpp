// Sort 0s 1s and 2s in a given linked list 
// Using basic approach -> Count variables 


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

void sortLinkedList(Node* &head) {
    
    // STEP 1 : Find count of 0s 1s and 2s
    int zero = 0;
    int one  = 0;
    int two  = 0;

    Node* temp = head;

    while(temp != NULL) {

        if (temp -> data == 0) {
            zero++;
        }

        else if (temp -> data == 1) {
            one++;
        }

        else if (temp -> data == 2) {
            two++;
        }

        temp = temp -> next;
    }

    // STEP 2 : Fill 0, 1 and 2 in original LL ->
    // Depending upon the count of each, replace by 0s first then 1s and then 2s

    temp = head;            // Resetting temp 
    while(temp != NULL) {

        // Fill 0s
        while(zero) {       // Until zeros are available
            temp -> data = 0;
            temp = temp -> next;
            zero--;         // Decrementing when 0 is used 
        }

        // Fill 1s
        while(one) {        // Until ones are available
            temp -> data = 1;
            temp = temp -> next;
            one--;
        }

        // Fill 2s
        while(two) {
            temp -> data = 2;
            temp = temp -> next;
            two--;
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