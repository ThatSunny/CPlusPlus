#include<iostream>
#include<stack>
using namespace std;

int main() { 

    // Creating Stack
    stack<int> st;

    // Insert an element
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);        // Top element

    // Removing element
    st.pop();           // Top element now -> 30


    // Checking element on top
    cout << "Top element: " << st.top() << endl;

    // Size of stack
    cout << "Size: " << st.size() << endl;

    // Checking if empty or not
    if(st.empty()) {
        cout << "Empty" << endl;
    } else { 
        cout << "Not empty" << endl;
    }


    // Printing the elements of stack
    cout << "Elements: ";
    while(!st.empty()) {
        cout << st.top() << " ";        // Access the top element
        st.pop();                       // Remove it
    }
    cout << endl;
}