// Check whether the given linked list is palindrome or not

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

Node* reverseNodes(Node* &head) {

    if(head == NULL) {
        return head;
    }

    if(head -> next == NULL) {
        return head;
    }


    Node* left = NULL;
    Node* curr = head;
    Node* right = curr -> next;

    while(curr != NULL) {
        right = curr -> next;

        curr -> next = left;
        left = curr;
        curr = right;
    }

    return left;
}

bool isPalindrome(Node* &head) {

    if(head == NULL) {
        cout << "LL is empty";
        return true;
    }

    if(head -> next == NULL) {
        return true;    
    }

    // STEP 1 : Find middle node
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    // When loop exits -> slow is pointing to middle node
    
    // STEP 2 : Reverse after the middle node
    Node* headReverse = reverseNodes(slow -> next);         // headReverse -> Starting/Head of linked list to be reversed 
    
    // Connecting the first half of LL(upto mid node) to the reversed LL
    slow -> next = headReverse;


    // STEP 3 : Start comparison
    Node* temp1 = head;
    Node* temp2 = headReverse;

    while(temp2 != NULL) {

        // If any of the data doesnt matches
        if(temp1 -> data != temp2 -> data) {
            return false;
        }

        // If data matches
        else {
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }
    return true;
}

int main() {

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(40);
    
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = NULL;          

    bool ans = isPalindrome(head);

    if(ans) {
        cout << "Valid palindrome";
    } else {
        cout << "Not a valid palindrome";
    }
 
}   