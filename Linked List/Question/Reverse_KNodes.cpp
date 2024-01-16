// Reverse K nodes in Linked list
// eg -> 10 20 30 40 50 60 
//       k = 3  ||  Output : 30 20 10 | 60 50 40
//       k = 4  ||  Output : 40 30 20 10 | 50 60


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

int getLength(Node* &head) { 
    Node* temp = head;
    int len = 0;

    while(temp != NULL) { 
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* reverseNodes(Node* &head, int k) { 
        
    // Edge cases
    // If LL is empty
    if(head == NULL) { 
        cout << "Empty! Can't find middle node";
        return head;
    }

    // If 'K' is greater than length
    int len = getLength(head);
    if(k > len) { 
        // cout << "Enter valid value!" << endl;
        return head;
    }

    // Other generic case
    // STEP 1 : Reverse first K nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;

    int count = 0;                  // To keep track of nodes
    while(count < k) { 

        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        
        count++;
    }

    // For remaining nodes -> Recursion
    if(forward != NULL) { 
        
        // Recursive relation
        head -> next = reverseNodes(curr, k); 
    }
    return prev;
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
    Node* sixth = new Node(60);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    sixth -> next = NULL;

    print(head);

    head = reverseNodes(head, 3);
    print(head);
}