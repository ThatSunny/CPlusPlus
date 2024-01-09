// You're given 2 numbers which are represented in form of linked list
// Return the output sum as linked list

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


Node* sumNode(Node* &head1, Node* &head2) {

    // If any of the LL is empty
    if(head1 == NULL) {
        return head2;
    }

    if(head2 == NULL) {
        return head1;
    }


    // STEP 1 : Reverse both LL
    head1 = reverseNodes(head1);
    head2 = reverseNodes(head2);


    // STEP 2 : Add both LL
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;

    while((head1 != NULL) && (head2 != NULL)) {
        // Calculate sum
        int sum = carry + head1 -> data + head2 -> data;
        
        // Calculate digit(to create a new node) and carry
        int digit = sum % 10; 
        carry = sum / 10;

        // Create new node for digit and attach
        Node* newNode = new Node(digit);
        
        // Inserting first node
        if(ansHead == NULL) {
            ansHead = newNode;
            ansTail = newNode;
        }

        // Other cases
        else {
            ansTail -> next = newNode;
            ansTail = newNode;
        }
    
        // Going to next nodes
        head1 = head1 -> next;
        head2 = head2 -> next;

    }     
    
    // Exits loop when any of the list ends
    // If head1 size was bigger
    while(head1 != NULL) {
        int sum = carry + head1 -> data;

        int digit = sum % 10; 
        carry = sum / 10;

        Node* newNode = new Node(digit);

        ansTail -> next = newNode;
        ansTail = newNode;

        head1 = head1 -> next;
    }


    // If head2 size was bigger
    while(head2 != NULL) {
        int sum = carry + head2 -> data;

        int digit = sum % 10; 
        
        carry = sum / 10;

        Node* newNode = new Node(digit);

        ansTail -> next = newNode;
        ansTail = newNode;

        head2 = head2 -> next;
    }


    // If data is still present in carry
    while(carry != 0) { 
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
 
        Node* newNode = new Node(digit);

        ansTail -> next = newNode;
        ansTail = newNode;
    }
    
    // STEP 3 : Reverse ans LL
    ansHead = reverseNodes(ansHead);
    return ansHead;
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

    // First LL
    Node* head1 = new Node(9);
    Node* second1  = new Node(4);

    head1 -> next = second1;

    // Second LL
    Node* head2 = new Node(9);
    Node* second2  = new Node(2);
    Node* third2 = new Node(4);

    head2 -> next = second2;
    second2 -> next = third2;

    // Calling sum function
    Node* ans = sumNode(head1, head2);

    // Printing the nodes
    print(ans);

}   