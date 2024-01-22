// Insert 2 stacks in a single array

#include<iostream>
using namespace std;

class Stack {
    public:

    int* arr;               // Array 
    int size;               // Size of the array
    int top1;               // Starting of first stack
    int top2;               // Starting of second stack

    // CTor
    Stack(int size) { 
        arr = new int[size];
        this -> size = size;

        top1 = -1;
        top2 = size; 


        // Initialize the array with 0s -> To avoid garbage values
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    // Functions
    void push1(int data) {

        // If no space available
        if(top2 - top1 == 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top1++;                                  
            arr[top1] = data;           // Inserting data at top
        }
    }

    void pop1() {

        // If stack empty
        if(top1 == -1) {
            cout << "Stack Underflow" << endl;
        } else { 
            top1--;                      // Decrementing top -> Going left
        }
    }

    void push2(int data) {

        // If no space available
        if(top2 - top1 == 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top2--;                     // Right to left -> Decrementing
            arr[top2] = data;           // Inserting data on top 
        }
    }

    void pop2() {

        // If stack empty
        if(top2 == size) { 
            cout << "Stack Underflow" << endl;
        } else { 
            top2++;                     // Incrementing top -> Going left to right
        }
    }

    void print() {
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    // First stack
    Stack st(10);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push1(50);
    st.push1(60);


    // Second stack
    st.push2(110);
    st.push2(120);
    st.push2(130);
    st.push1(140);

    // Similarly pop() function can be performed on both stacks

    // Printing the array
    st.print();
}