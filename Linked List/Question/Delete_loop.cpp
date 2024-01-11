// Remove the loop -> Node which reconnects -> Point it to NULL (pointer before fast)

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

Node* deleteLoop(Node* &head) { 

    // Empty LL
    if(head == NULL) {
        cout << "Empty! Can't find loop";
        return NULL;
    }

    // Single element
    if(head -> next == NULL) {
        cout << "Single element present";
        return NULL;
    }


    // Floyd Cycle Detection
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL) { 

        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast) {      // Fast caught up to slow pointer
            slow = head;        // Point it back to head and come out of while loop
            break;  
        }
    }

    Node* prev = fast;          // Pointing it to fast
    while(slow != fast) {

        prev = fast;            // Point prev to fast before fast moves
                                // That way prev always stay behind fast
        
        // Move the one node at a time
        slow = slow -> next;
        fast = fast -> next;
    }


    // Point prev to NULL
    prev -> next = NULL;        // Loop breaks

    // Return any of the two pointer
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

int main() {

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = third;          // 30 40 50 -> LOOP

    Node* ans = deleteLoop(head);

    cout << "Loop starting at: " << ans -> data << endl;
    cout << "New loop: ";
    print(head);

}   