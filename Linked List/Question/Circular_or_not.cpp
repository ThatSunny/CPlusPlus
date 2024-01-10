// Check whether a given linked list is circular or not

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


// Approach 1 : Single pointer approach
// bool circular(Node* &head) { 
//     Node* temp = head -> next;

//     while(temp != NULL) {

//         if(temp == head) { 
//             return true;
//         }

//         temp = temp -> next;
//     }
//     return false;
// }


// Approach 2 : Slow & fast pointer 
bool circular(Node* &head) { 
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    
        if(fast == slow) {          // Fast caught upto slow pointer 
            return true;            // Circular linked list
        }        
    }
    return false;           
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
    sixth -> next = head;

    bool ans = circular(head);

    if(ans) { 
        cout << "Circular Linked List";
    } else { 
        cout << "Not a circular Linked List";
    }
}